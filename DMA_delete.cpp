#include <iostream>
#include <new> 
using namespace std;
int main() {
int *array;
int i, size;
cout << "Enter the size of the array" ;
cin >> size;
array = new int [size];

for (i=0;i<size;i++) {
        array[i]=i*i;
    }
    
for (int j=0;j<size;j++) {
        cout << "array[" << j <<"] =" << array[j]<<endl;
    }
delete []array;

for (int j=0;j<size;j++) {
        cout << "array[" << j <<"] =" << array[j]<<endl;
}
return 0;

}


