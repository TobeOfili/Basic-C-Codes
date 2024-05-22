#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r;
    int array1[3][3];
    int array2[3][3];
    int sum[3][3];

    cout << "Enter the elements of the first array:" << endl;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;

    cout << "\nEnter the elements of the second array:" << endl;
    cin >> j >> k >> l >> m >> n >> o >> p >> q >> r;

    array1[0][0] = a; array1[0][1] = b; array1[0][2] = c;
    array1[1][0] = d; array1[1][1] = e; array1[1][2] = f;
    array1[2][0] = g; array1[2][1] = h; array1[2][2] = i;

    array2[0][0] = j; array2[0][1] = k; array2[0][2] = l;
    array2[1][0] = m; array2[1][1] = n; array2[1][2] = o;
    array2[2][0] = p; array2[2][1] = q; array2[2][2] = r;

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            sum[row][col] = array1[row][col] + array2[row][col];
        }
    }

    cout << "The sum of the two arrays is:" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << sum[row][col] << ' ';
        }
        cout << endl;
    }

    return 0;
}
