#include <iostream>
#include <math.h>
using namespace std;


int main () {
	int n, s = 0 , dem = 0;
	cin >> n ;
	int A[n];
	for (int i = 0 ; i < n ; i++ ) {
		cin >> A[i] ;
	}
	for ( int i = 0 ; i < n ; i++ ) {
		if ((A[i] % 2) == 1) {
			s += A[i];
			dem ++ ;
		}
	}
		if (dem == 0) {
			cout << "k co so le " ; 
		} else { cout << (float) s/dem ; } 
	
}
