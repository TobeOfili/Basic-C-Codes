#include <iostream> 
#include <fstream>
using namespace std;

int main (){
    // create the file
    ofstream myfile;
    //open the file
    myfile.open ("example.txt");
    // write to the file
    myfile << "Writing this to a file.\n";
    // close the file
    myfile.close();
    return 0;
}