#include <iostream>
#include <bits/stdc++.h>

long long a[1001][1001] , n , m;

using namespace std;
int main () {
    ofstream fo ("output.txt");
    int t;
    string s;
    cin >> t;
    while (t--){
        cin >> m >> n;
        int h[3][1001] = {0} , c[3][1001] = {0};
        for(int i = 0 ; i < m ; i ++){
            cin >> s;
            for (int j = 0 ; j < n ; j ++){
                int tmp = s[j] - 48;
                a[i][j] = tmp;
                h[ tmp ][i] ++;
                c[ tmp ][j] ++;
            }
        }

        long long dem;
        dem = 0;
        for (int i = 0 ; i < m ; i ++){
            for (int j = 0 ; j < n ; j ++){
                int tmp = a[i][j];
                //cout << tmp;
                if (tmp == 2 && h[1][i] > 0 && c[1][j] > 0 ){
                    dem += h[1][i] * c[1][j];
                } else {
                    if (1 == tmp && h[2][i] > 0 && c[2][j] > 0 ){
                        dem += h[2][i] * c[2][j];
                    }
                }
            }
        }
        
        fo << dem << endl;
    }
}