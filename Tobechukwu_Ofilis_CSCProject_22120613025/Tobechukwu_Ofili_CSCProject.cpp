#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct Question {
    string questiontext;
    char answer;
    char useranswer;
   };


void Test() {
    cout << "Start" << endl;
    cout << "Tip press 's' key to skip a question and answer it later !\n" << endl ;
    string filename = "questions.csv";
    ifstream file(filename);

    vector<Question> questions;
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        Question questioncontainer;

        getline(ss, questioncontainer.questiontext, '?');
        ss >> questioncontainer.answer;
        ss.ignore();
        questions.push_back(questioncontainer);

        file >> ws;
    }
    file.close();

    int score = 0;
    vector<Question> skipped;
    for (auto& questioncontainer : questions) {
        cout << questioncontainer.questiontext << " ?" << endl;
        cin >> questioncontainer.useranswer;

        if (toupper(questioncontainer.useranswer) == questioncontainer.answer) {
            score++;
        } else if (toupper(questioncontainer.useranswer) == 'S') {
            skipped.push_back(questioncontainer);
        }
    }

    cout << "\nQuestions you skipped:\n";
    if (!skipped.empty()) {
        for (auto& skippedquestion : skipped) {
            cout << skippedquestion.questiontext << " ?" << endl;
            cin >> skippedquestion.useranswer;

            if (skippedquestion.useranswer == skippedquestion.answer) {
                score++;
            }
        }
    } else {
        cout << "N/A" << endl;
    }

    cout << "\nYour Score is " << score << " out of " << questions.size() << endl;
    cout << "\nYour Script:\n";
    for (const auto& questioncontainer : questions) {
        cout << questioncontainer.questiontext << " ?" << endl;
        cout << "Your Answer: " << questioncontainer.useranswer << endl;
        cout << "Correct Answer: " << questioncontainer.answer << "\n" << endl;
    }
}


void UploadQuestions() {
    ofstream QuestionFile("questions.csv", ios::app);

    while (true) {
        Question NewQuestion;
        cout << "Enter the question (end with a '?'): ";
        cin.ignore(); 
        getline(cin, NewQuestion.questiontext, '?');

        cout << "Enter the answer (A, B, C, D): ";
        cin >> NewQuestion.answer;
        QuestionFile << "\t" << NewQuestion.questiontext << '?' << NewQuestion.answer << "\n";

        string add;
        cout << "Do you want to add more questions? (yes/no): ";
        cin >> add;

        if (add == "no") {
            break;
        }
    }

    QuestionFile.close();
    cout << "Questions uploaded successfully!\n" << endl;
}


void Login() {
    ifstream file("UserLogins.csv");
    while (true) {
        string username, password;
        cout << "\nEnter your username: ";
        cin >> username;
        cout << "Enter your password: ";
        cin >> password;

        if (username == "moses" && password == "bello") {
        file.close();
        cout << "Admin Login Successful.\nWelcome Admin!\n" << endl;
        UploadQuestions();
        return;
        }

        string line;
        while (getline(file, line)) {
            stringstream ss(line);
            string entereduser, enteredpassword;
            if (getline(ss, entereduser, ',') && getline(ss, enteredpassword, ',')) {
                if (username == entereduser && password == enteredpassword) {
                    file.close();
                    cout << "\nSuccessful Login.\n Welcome " << entereduser << " !\n" << endl;
                    return;
                }
            }
            else {
                cout << "Invalid username or password.\n Try again.\n" << endl;
                continue;
            }
        }
        file.close();
    }return;
}


void SignUp() {
    ofstream file("UserLogins.csv");
    string username, password;
    cout << "\nEnter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;

    while (true) {
        ofstream file("UserLogins.csv", ios::app);
    if (file.is_open()) {
        file << username << "," << password << "\n";
        file.close(); break;
    } 
    else {
        cout << "Unable to open file. Try again." << endl;
        return;
    }}

    cout << "Successful Signup.\nProceed to Login\n" << endl;
    Login();
}


int main() {
    cout << "CSC201 Computer Based Test" << endl;

    int choice;
    while (true) {
        cout << "Are you a User or an Admin?" << endl;
        cout << "1.) User\n2.) Admin\n";
        cout << "Enter your choice 1 or 2: ";
        cin >> choice;

        if (choice == 1) {
            int choice1; 
            cout << "\nWelcome User" << endl;
            cout << "Would you like to Login or sign up" << endl;
            cout << "1.) Login\n2.) Sign up\n" ;
            cin >> choice1;
            if (choice1 == 1) { Login(); Test();}
            if (choice1 == 2) { SignUp(); Test(); }
            
         break;
            }

        else if (choice == 2) {
            cout << "Welcome Admin" << endl;
            Login();
            break;
        } else {
            cout << "Invalid. Please enter 1 or 2\n" << endl;
        }
    }


    return 0;
}

