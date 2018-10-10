#include <iostream>
#include <math.h>
using namespace std;

int a[10000] = {0},t,dem2 = 0;

int min(int a , int b){
	return a < b ? a : b ;
}

void XD(int n){
	int dem = 0;
	
	if (n <= 9) {
		for (int i = 2 ; i < min(10,n) ; i++){
			if (n % i == 0) {
				dem++;
				cout << i ;
				if ( (n / i) >= 10 ) XD(n / i);
				else cout << n / i ;
				break;
			}
		}
		if (dem == 0) {
			if (n < 10) cout << 1 << n ;
			else cout << -1;
		}
	} else {
		t = 0;
		int i = 9;
			while ( i >= 1 && n != 1){
				if (i == 1) {
					cout << -1;
					dem ++;
					break;
				} else {
					if (n % i == 0){
						a[t++] = i;
						n /= i;
						i = 9;
					} else i--;
				}
				
			}
		
		if (dem == 0){
			for (int j = t-1 ; j >= 0 ; j --){
				cout<< a[j];
			}
		}
	}
}

int main () {
	int n;
	cin >> n ;
	XD(n);
}
