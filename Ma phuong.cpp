#include <iostream>
using namespace std;
int main (){
	int n , A[100][100] = {0} , x , y ;
	do {	
		cin >> n ;
	} while (n <= 3 );
	//-------------------
	if (n % 2 == 1) {
		x = n - 1 ; y = n / 2 ;
		for (int i = 1 ; i <= n*n ;i++ ){
			A[x][y] = i ;
			x++ ; y++ ;
			if (A[x][y] != 0 || (x == n && y == n) ){
				y = y - 1;
				x = x - 2;
			}
			if (x >= n) {
				x = 0 ;
			}
			if (y >= n) {
				y = 0 ;
			}
		}
	}
	
	
	for (int i = n - 1 ; i >= 0 ; i--){
		for (int j = 0 ; j < n ; j++){
			cout << A[i][j] <<"\t"; 
		}
		cout <<"\n\n";
	}
}
