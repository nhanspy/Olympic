#include <bits/stdc++.h>
using namespace std;
float a[1000] , b[1000];
int main () {
	int n ;
	float t = 0 , d = 0 ;
	int dem = 0 , imax = 0;
	cin >> n ;
	for (int i = 0 ; i < n ; i ++) cin >> a[i] ;
	for (int i = 0 ; i < n ; i ++) cin >> b[i] ;
	sort(a , a + n);
	sort(b , b + n);
	t = a[0] , d = b[0] ;
	for (int i = 1 ; i < n ; i++){
		if (a[i] <= d) {
			if (a[i] < t) t = a[i];
			if (b[i] < d) d = b[i];
			t = a[i] ;
			dem++;
		} else {
			if (dem > imax) imax = dem;
			dem = 0;
			if (a[i] <= b[i-1]) {
				t = a[i] ;
				(b[i] < b[i-1]) ? d = b[i] : d = b[i-1];
				dem++;
			}
		}
	} 
	if (dem > imax) imax = dem ;
	cout <<" "<<imax + 1 ;
}
