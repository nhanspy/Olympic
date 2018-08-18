#include <iostream>
using namespace std ;
int main () {
	int A[100], B[100] , n , j = 0;
	cin >> n ;
	for (int i = 0 ; i < n ; i ++) {
		cin >> A[i];
		if (A[i] < 20 && A[i] % 2 == 0) {
			B[j] = A[i];
			j ++ ;
		}
	}
	for (int i= 0 ; i < j ; i ++) {
		cout << B[i] << " " ;
	}
}
