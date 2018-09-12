#include <iostream>
using namespace std;
int main () {
	int n , a[100000] , b[100000] = {0} , max , min ;
	long long tong = 0;
	cin >> n ;
	for (int i = 0 ; i < n ; i ++){
		cin >> a[i] ;
		if (i == 0) {
			max = a[i] ;
			min = a[i] ;
		}
		b[a[i]] ++ ;
		if (a[i] > max) max = a[i] ;
		if (a[i] < min) min = a[i] ;
	}
	for (int i = min ;i <= max ; i++ ){
		if (b[i] >= 2 ) {
			for (int j = b[i] - 1 ; j >= 1 ; j --){
				tong += j ;
			}
		}
	}
	cout << tong ;
}
