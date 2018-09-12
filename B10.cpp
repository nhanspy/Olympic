#include <bits/stdc++.h>
using namespace std;
int main () {
	int n , a[100000] , imax = 0 , imin = INT_MAX ,dodai = 0 , vtmax = 0,vtmin = 0;
	cin >> n ;
	srand(time(0));
	for (int i = 0 ; i < n ; i++){
		a[i] = 10 - rand() % 20;
		cout << a[i] << " ";
		if (i == 0){
			imax = a[0] ;
			imin = a[0] ;
		} else {
			if (a[i] < imin) {
				if (imax - imin > dodai) {
					dodai = imax - imin;
					vtmax = imax;
					vtmin = imin;
				}
				imin = a[i];
				imax = 0;
			}
			if (a[i] > imax) imax = a[i];
		}
	}
	if (imax - imin > dodai) {
		dodai = imax - imin;
		vtmax = imax;
		vtmin = imin;
	}
	if (dodai == 0) cout <<"\n-1";
	else cout <<endl<<vtmin << " "<<vtmax ;
}
