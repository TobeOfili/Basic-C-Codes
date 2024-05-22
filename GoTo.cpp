#include <iostream> 
using namespace std;
 
int main (){
    int n =10;
loop: 
        cout << n << ",";
        n--;
        goto loop;
        cout << "End of the loop!\n";
        return 0;
}

