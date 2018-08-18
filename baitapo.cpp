#include <iostream>
using namespace std;
int main () {
	int n;
	do {
		cin >> n ;
	} while (n > 10*10*10*10*10*10);
	
	int A[n], a, dem;
	for (int i = 0 ; i < n  ; i ++ ){
			cin>> A[i];
		}
		
		
	cout << "Nhap A : "; cin>> a ;
	for (int i = 0 ; i < n -1 ; i ++) {
		for (int j =  i+1 ; i < n ; i ++){
			if (A[i]+A[j] == a) 
			dem ++ ; 
		}
	}
	cout << dem ;
}
