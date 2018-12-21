#include<bits/stdc++.h>
using namespace std;
int main () {
    int b[1000000] = {1};
    b[1] = false;
    int maxv = 1000000;
    for (int i = 2 ; i <= maxv ; i++){
        if (b[i]){
            int j = 2;
            while ( i * j <= maxv/i ){
                b[i * j] = 0;
                j ++;
            }
        }
    }

    for (int i = 1 ; i < 1000 ; i++) if (b[i]) cout << 1 << " "; else cout << 0 << " ";

    int a[1000][1000] ;

    int n , m;
    cin >> n >> m;
    for (int i = 0 ; i < n ; i ++){
        for (int j = 0 ; j < m ; j ++){
            cin >> a[i][j] ;
            if ( b[a[i][j]] ) cout << 1 << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }

}