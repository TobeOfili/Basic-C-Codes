#include <iostream>
using namespace std;
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r ;
int sum [3][3];
int main()
{

cout << "Enter the elements of the first array" << endl ;
cin >> a >> b >> c >> d >> e >> f >> g >> h >> i ;

cout << "\n" << "Enter the elements of the second array" << endl ;
cin >> j>>k>>l>>m>>n>>o>>p >> q >> r;

int array1 [3][3] = {a,b,c,d,e,f,g,h,i} ;
int array2 [3][3] = {j,k,l,m,n,o,p,q,r} ;
int sum[3][3];

 for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[3][3] = array1[i][j] + array2[i][j];
            
            cout << "The sum of the 2 arrays is " << sum[3][3] << endl ;

        }
    }


 return 0;     
}