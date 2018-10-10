#include <iostream>
#include <algorithm>
using namespace std;
int main () {
	int n, A[102] , B[100] , C[100];
	cin >> n ;
	for (int i = 0 ; i < n ; i ++){
		cin >> A[i];
	}
	
	sort(A,A+n);
	
	int l = 0 , r = 0 , b = 1 , c = 0;
	B[0] = A[n - 1];
	l = B[0];
	
	for (int i = n - 2 ; i >= 0 ; i --){
		if(l < r) {
			B[b] = A[i];
			l += B[b];
			b++;
		} else {
			C[c] = A[i];
			r += C[c];
			c++;
		}
	}
	
	for (int i = 0 ; i < b ; i ++){
		cout << B[i] <<" ";
	}
	cout << endl;
	for (int i = 0 ; i < c ; i ++){
		cout << C[i] <<" ";
	}
	cout<< endl << l << " " << r ;
}
