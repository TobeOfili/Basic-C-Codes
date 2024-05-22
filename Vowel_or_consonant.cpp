#include <iostream>
using namespace std;

int main() {
char a;

cout << "Enter a letter: ";
cin >> a;

char alphabets[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'} ;

if (tolower(a) == 'a' || tolower(a) == 'i' || tolower(a) == 'o' || tolower(a) == 'e' || tolower(a) == 'u') {
        cout << "\n" << a << " is a vowel" << endl;
} 
else if (tolower(a) >= alphabets[0] && (tolower(a) != 'a' || tolower(a) != 'i' || tolower(a) != 'o' || tolower(a) != 'e' || tolower(a) != 'u' )){
        cout << "\n" << a << " is a consonant" << endl;
}
else {
    cout << "\n" << a << " is a special character" << endl;
}
    return 0;
}
