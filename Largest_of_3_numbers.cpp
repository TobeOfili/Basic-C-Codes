#include <iostream> 
using namespace std;

int main (){
int a ;
int b ;
int c ;

cout << "Enter the first number" << endl;
cin >> a  ;
cout << "Enter the second number" << endl;
cin >> b  ;
cout << "Enter the third number" << endl;
cin >> c  ;

if (a > b && a > c ) {
    cout << "\n" << a <<" is the biggest number" << endl ;
}

else if (b > a && b > c) {
    cout <<"\n" << b << " is the biggest number" << endl ;
}
else if ( c > a && c > b) {
    cout << "\n" << c << " is the biggest number" << endl ;
}
else {
    cout << "Invalid input" << endl ;
}

return 0;
    
}

