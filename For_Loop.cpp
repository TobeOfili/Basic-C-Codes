#include <iostream> 
using namespace std;

int main (){
    int j; 
    int k; 
     
    
    for (k= 1;k<13;k++){
        cout << "Multiplication Timestables of " << k << endl;
        for (j = 1; j<13; j++){
            cout<< k <<" x "<< j << " = " <<j*k  << "\t";
        }
    cout << endl;
    }
    return 0;


}