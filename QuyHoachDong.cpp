#include <bits/stdc++.h>
using namespace std;
int main () {
	int s , n , min[10000] , a[10000] ;
	cin >> n >> s ;
	for (int i = 0 ; i < n ; i ++) {
		cin >> a[i] ;
	}
	min[0] = 0 ;
	for (int i = 1 ; i <= s ; i ++) {
		min[i] = INT_MAX ;
		for (int j = 0 ; j < n ; j ++){
			if (min[i - a[j]] + 1 < min[i] && a[j] <= i ) min[i] = min[i - a[j]] + 1 ;
		}
	}
	cout << min[s];
}
