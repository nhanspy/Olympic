#include <iostream>
using namespace std;
int main () {
	int n ,chan = 0 , le = 0 , tong = 0 , a[10000] , dem = 0 , amln = -99999999;
	cin >> n ;
	for (int i = 0 ; i < n ; i ++){
		cin >> a[i] ;
		if (a[i] > 0) {
			dem ++ ;
			i % 2 == 0 ? chan += a[i] : le += a[i] ;
			if (i == n - 1) tong += chan > le ? chan : le ;
		} else {
			tong += (chan > le) ? chan : le ;
			chan = 0;
			le = 0;
			if (amln < a[i] ) amln = a[i];
		}
	}
	int tmp = (chan > le) ?  chan :  le ;
	if (dem == 0) cout << amln ;
	else if(dem == n) cout<< tmp ;
		else cout << tong ;
}
