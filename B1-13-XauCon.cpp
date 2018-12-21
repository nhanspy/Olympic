//olp16dt-palin
/*
9 10
11 1 2 1 1 5 10 2 3
*/

#include <iostream>
using namespace std;
int n , a[10000],  m , q;
// int NP(int nn , int l , int r){
//     if (l >= r) return l - 1;
//     int mid = (r - l)/2;
//     if (a[mid] == nn ) return mid;
//     if (a[mid] > nn && a[mid - 1] < nn) return mid - 1;
//     else if (a[mid] > nn) return NP(nn,l,mid-1);
//     return NP(nn,mid+1,r);
// }

int C(int a , int b ){
    int s = 0;
    for (int i = a - 1 ; i >= 1 ; i--) s += i;
}

int main () {
    cin >> n >> m >> q;
    int tmp,dem = 0;
    a[-1] = 0;
    for (int i = 0 ; i < n ; i ++){
        cin >> tmp;
        a[i] = a[i-1] + tmp;
    }
    // for (int i = 0 ; i < n ; i ++) {
    //     tmp = NP(a[i] + m,i + 1 , n - 1);
    //     if (tmp != 0) dem += tmp - i;
    // }
    int l = 0, r = 0;
    for (int i = 0 ; i < n ; i ++){
        if (a[r] - a[l-1] <= q) {
            l++;
            C(l-r+1,2);
        }
        if (l == r)
    }

    cout << dem;
}