#include <bits/stdc++.h>
using namespace std;

int tinh(int n){
    int s = 0;
    while (n != 0){
        s += n % 10;
        n /= 10;
    }
    return s;
}

int min(int a , int b){ return a < b ? a : b ; }

// int main () {
//     long long int m,n;
//     int t;
//     cin >> t;
//     while (t--){
//         cin >> n >> m;
//         long long int dem = 0;
//         //n = (pow(10,n) - 1 ) % 120;
//         //cout << n;
//         n = min(n,999);
//         for (int i = 0 ; i <= n ; i ++){
//             if (tinh(i) == m) dem ++;
//         }
//         cout << dem << endl;
//     }
// }

int a[121] = {0};

int main (){
    long long int n,m;
    int t;
    cin >> t;
    while (t--){
        cin >> n >> m;
        
        for (int i = 1 ; i <= m ; i ++){
            for (int j = 0 ; j < i)
        }


    }
}