#include <iostream> 
#include <thread>
#include <vector>
using namespace std;

vector<int> vec;

void push()
{
    for(int i =0; i<=10; i++){
        cout << "Push" << i << endl;
        //sleep(0.01);
        vec.push_back(i);
    }
}

void pop()
{
    for(int i =0; i<=10; i++){
       if (vec.size() > 0) {
        int val = vec.back();

        vec.pop_back();
        cout << "Pop" << val << endl;
       }
       sleep(0.5);
    } 
}

int main (){

    return 0;
}