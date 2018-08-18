
#include <iostream>
using namespace std;
int main ()
{
	int n ;
	cin >> n ;
	cout<< endl ;
	int A[1000] = {0} ;
	for ( int i = 0 ; i < n ; i++ ) {
		cin >> A[i];
	}
	//----------------------------------------------
	
	int B[2][n] , dem = 0 , d = 0 , max = 0 ;
	for ( int i = 0 ; i < n ; i++ ) {
		if ( A[i] < A[i + 1] ) {
			dem ++ ;
		} else {
			B[0][d] = dem ;
			B[1][d] = i ;
			d ++ ;
			if ( dem > max ) {
				max = dem ;
			}
			dem = 0 ;
		} 
	}
	//-----------------------------------------------
	cout<< endl ;	
	for ( int i = 0 ; i < d ; i ++ ) {
		if (B[0][i] == max) {
			for (int l = (B[1][i] - B[0][i] ) ; l <= B[1][i] ; l++ ){
				cout << A[l] << " ";
			}
		cout << endl;
		} 
	}
	
}
