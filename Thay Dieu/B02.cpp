#include <iostream>
using namespace std;
int main () {
	int n , k , a[1000000] ,b[1000000] = {0};
	cin >> n >> k ;
	for (int i = 0 ; i < n ; i++){
		cin >> a[i];
		b[i] += a[i] + b[i - 1] ;
	}
	int l = 0 , r = 0 , max = 0;
	while (l <= n-1 && r < n-1) {
		if (l == n-1) r++ ;
		else
		if ( a[l] - a[r - 1] <= k) {
			l++ ;
		} else r++ ;
		if ( a[l] - a[r - 1] == k) 
			if (l - r + 1 > max ) {
				max = l - r + 1 ;
				//cout << max ;
			}
	}
	cout << max ;
}  // 5 4 -2 1 3 2 2
