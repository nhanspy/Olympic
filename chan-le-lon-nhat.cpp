#include <iostream>
using namespace std;
int main () {
	int A[100],  n , maxle = 0 , maxchan = 0 , c ;
	cin >> n ;
	for (int i = 0 ; i< n ; i++){
		cin >> A[i];
		(A[i] % 2 == 0) ? ((A[i] > maxchan) ? maxchan = A[i] : c = 0 )
						: ((A[i] > maxle )? maxle = A[i] : c = 0);
	}
	//----------
	cout<< maxchan << " "<< maxle ;
}
