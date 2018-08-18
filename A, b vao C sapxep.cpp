#include <iostream>
using namespace std;

int main () {
	int A[100], B[100] , C[200] , n , m ,k , x = 0 ,y = 0;
	cin >> n >> m ;
	for (int i = 0 ; i < n ; i ++) cin>> A[i];
	for (int i = 0 ; i < m ; i ++) cin>> B[i];
	k = m + n ;
	
	for (int i = 0 ; i < k ; i ++ ){
		if (x >= n) {
			C[i] = B[y] ;
			y++;
		}else {
			if (y >= m) {
				C[i] = A[x] ;
				x++;
			} else {
				if (A[x] > B[y]) {
					C[i] = B[y] ;
					y++;
				} else {
					C[i] = A[x] ;
					x++;
				}
			}
		}
	}
	for (int i = 0 ; i < k ; i ++ ){
		cout << C[i] << " ";
	}
}






