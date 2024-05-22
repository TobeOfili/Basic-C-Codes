#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[50];

    cout << "Enter a word: ";
    cin >> str;

    int length = strlen(str);

    // Using a for loop to reverse the characters
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    cout << "Reversed word: " << str << endl;

    return 0;
}
