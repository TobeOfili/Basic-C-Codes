#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main(){
    map<int,int> gquiz;

    gquiz.insert(pair<int, int >(1,40));
    gquiz.insert(pair<int, int >(2,30));
    gquiz.insert(pair<int, int >(3,60));
    gquiz.insert(pair<int, int >(4,20));
    gquiz.insert(pair<int, int >(5,50));
    gquiz.insert(pair<int, int >(6,50));
    gquiz.insert(pair<int, int >(7,10));

    map<int,int>::iterator itr;
    cout << "\nThe map gquiz is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz.begin(); itr != gquiz1.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;

    map<int, int> gquiz2(gquiz1.begin(), gquiz1.end());
    cout << "\n The map gquiz2 after"
         << "assign from gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;

    cout << "\ngquiz2 after removal of"
            "elements less than key=3 : \n";
    cout << "\tKEY\tELEMENT\n";
    gquiz2.erase(gquiz2.begin(),gquiz2.find(3));
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    int num ;
    num = gquiz.erase(4);
    cout << "\ngquiz2.erase(4) : ";
    cout << num << " removed \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    cout << endl;
    cout << "gquiz1.lower_bound(5) : "
         << "\tKEY = " 

}