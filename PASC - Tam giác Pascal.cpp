#include <iostream>
using namespace std;
int main () {
	int n, a[55][55] = {0};
	cin >> n ;
	for (int i = 0 ; i <= n ; i++ ){
		for (int j = 0 ; j <= i ; j ++){
			a[i][j] = a[i-1][j-1] + a[i-1][j] ;
			a[i][0] = 1 ;
			a[i][i] = 1 ;
			cout << a[i][j] << "\t";
		}
		cout << endl ;
	}
}
