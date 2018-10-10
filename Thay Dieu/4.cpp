#include <bits/stdc++.h>
using namespace std;
int main () {
	int n , a[100000] , tc = 0, tb = 0;
	cin >> n ;
	
	for (int i = 0 ; i < n ; i++){
		cin >> a[i] ;
	}
	
	sort(a,a+n);
	
	for (int i = n - 1 ; i >= 0 ; i --){
		if (tc >= tb ) tb += a[i];
		else  tc += a[i];
	}
	
	cout << tc*tb;
}
