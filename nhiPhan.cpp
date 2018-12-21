#include <bits/stdc++.h>
using namespace std;

int a[1000],n;

int np(int x , int l , int r){
    int mid = (r - l)/2;
    if ( x == a[mid] ) return mid;
    if (l == r && a[l] == x) return l;
    if (mid == 0 || x > a[r] || x < a[l] || l >= r ) return -1;
    if (x > a[mid]) return np( x , mid + 1 , r);
    else return np(x , l , mid - 1) ;
}

int main (){
    cin >> n;
    for (int i = 0 ; i < n ; i ++){
        a[i] = i + 1;
    }
    int x;
    cin >> x ;
    cout << np(x,0,n-1);

}