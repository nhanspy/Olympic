#include <iostream>
using namespace std;
void traodoi(int &a , int &b) {
	a = a + b ;
	b = a - b ;
	a = a - b ;
}

int main () {
	int A[1000], B[1000], C[1000], n, a = 0 , b = 0;
	cin >> n ;
	for (int i = 0 ; i < n ; i++){
		cin>> A[i];
		if (A[i] < 0) {B[a] = A[i]; a ++ ;}
		if (A[i]%2 == 1 || A[i]%2 == -1) {C[b] = A[i]; b ++;}
	}
	
	cout << "Am\tle\n" ;
	
	if (a < b) traodoi(a,b) ;
	for (int i = 0 ; i < a  ; i++) {
		B[i] != 0 ? cout << B[i] << "\t" : cout << "\t";
		C[i] != 0 ? cout << C[i] << endl : cout<< endl;
	}
}
