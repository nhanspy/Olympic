#include <iostream>
using namespace std;
void traodoi(int &a , int &b){
	a = a + b ;
	b = a - b ;
	a = a - b ;
}
	
	
	
int main () {
	int n , A[1000] ;
	cin >> n ;
	for (int i = 0 ; i < n ; i ++) {
		cin >> A[i];
	}
	for (int i = 0 ; i < n/2 ; i ++ ){
		traodoi(A[i] , A[n - i - 1]);
	}
	for (int i = 0 ; i < n ; i ++) {
		cout << A[i] << " ";
	}
}
