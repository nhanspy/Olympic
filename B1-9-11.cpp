#include <iostream>
using namespace std;

// int DQ(int *vt , int t ){
//     for (int i = 1 ; i <= n ; i ++){
//         if (vt[i][i]) return DQ(vt,i);
//     }
// }

int T[1001][100000];

int main (){
    int a[1001][1001];
    int n;
    cin >> n;
    for (int i = 1 ; i <= n ; i ++){
        for (int j = 1 ; j <= n ; j ++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1 ; i <= n ; i ++){
        T[1][i] = a[1][i];
    }

    for (int i = 2 ; i <= n ; i ++){
        for (int j = 1 ; j <= i ; j ++){
            T[i][j] = 
        }
    }

    // for (int i = 0 ; i < 5 ; i ++){
    //    cout << bit[][i];
    // }



}