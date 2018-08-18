#include <iostream>
using namespace std;
int main () {
	int A[100], n, k ;
	cin >> n >> k ;
	cout << "nhap mang \n" ;
	for (int i = 0 ; i < n ; i ++) {
		cin >> A[i];
	} 
	for (int i = n - 1 ; i >= 0 ; i --) {
		if (k <= A[i]) {
			A[i + 1] = A[i];
		} else {A[i + 1] = k ;break;}
	}
	for (int i = 0 ; i <= n ; i ++) {
		cout << A[i];
	}
}
