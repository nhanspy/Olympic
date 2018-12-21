#include <iostream>
#include <math.h>
using namespace std;
bool nt(int n){
    if (n <= 1) return false;
    for (int i = 2 ; i <= sqrt(n) ; i ++){
        if (n % i == 0) return false;
    }
    return true;
}

int main (){
    int n , m , q ;
    cin >> n >> m >> q ;
    int X[1000][1000], Y[1000][1000];
    for (int i = 0 ; i < n ; i ++) X[0][i] = 0;
    for (int i = 0 ; i < n ; i ++) Y[i][0] = 0;

    int tmp;
    for (int i = 1 ; i <= n ; i ++){
        for (int j = 1 ; j <= m ; j++) {
            cin >> tmp;
            nt(tmp) ? tmp =  1 : tmp = 0 ;
            X[i][j] = tmp + X[i-1][j];
            Y[i][j] = tmp + Y[i][j-1];

            cout << Y[i][j] << " ";
        }
        cout << endl;
    }

    // while (q--) {
    //     int x , y , r , c;
    //     cin >> x >> y >> r >> c ;
        

    // }

}