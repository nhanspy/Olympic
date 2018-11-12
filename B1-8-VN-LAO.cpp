//S[n+1][k] = k*S[n][k] + k*S[n][k-1]
//BellNumber

#include <iostream>
using namespace std;

int mod(int n) {return n ;}

int main (){
    int n, k, S[1002][1002] ;
    cin >> n;
    for (int i = 1 ; i <= n ; i ++){
        S[i][1] = 1;
        S[i][i] = 1;
    }

    for (int i = 2 ; i < n ; i ++){
        for (int j = 2 ; j <= i ; j ++){
            S[i + 1][j] = mod(j*S[i][j] + S[i][j-1]);
        }
    }

    // for (int i = 1 ; i <= n ; i ++){
    //     for (int j = 1 ; j <= n ; j ++){
    //         cout << S[i][j] << "\t";
    //     }
    //     cout << endl;
    // }

    int s = 0;
    for (int i = 1 ; i <= n ; i ++) {
        s += mod(S[n][i]);
        s = mod(s);
    }
    cout << s;

}