#include <iostream>
using namespace std;

void traodoi(int &a , int &b ) {
	a = a + b;
	b = a - b;
	a = a - b;
}

int main () {
	int A[100], n, j;
	cin >> n;
	for (int i = 0 ; i < n ; i ++) {
		cin >> A[i];
	}
	
	for (int i = 0 ; i < n ; i ++) {
		if (A[i] % 2 == 0 ) {
			j = i ++ ;
			while (j < n - 1) {
				if (A[j] % 2 == 0 && A[i] > A[j]) {
					traodoi(A[i],A[j]);
				}
				j ++ ;
			}
		}
	}
	for (int i = 0 ; i < n ; i ++) {
		cout << A[i] << " ";
	}
}
