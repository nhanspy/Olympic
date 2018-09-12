#include <iostream>
using namespace std;
int main () {
	int n, a[55][55] = {0} ;
	cin >> n ;
	if (n == 1) cout << 1 ;
	else 
		if(n == 2) cout <<1 <<endl<< 1 << " "<< 1 ;
		else {
			a[0][0] = 1 ;
			a[1][0] = 1 ;
			a[1][1] = 1 ;
			cout << a[0][0] <<endl <<a[1][0]<<" "<<a[1][1]<<endl;
			for (int i = 2 ; i < n ; i++ ){
				for (int j = 0 ; j <= i ; j ++){
					a[i][0] = 1 ;
					a[i][i] = 1 ;
					a[i][j] = a[i-1][j-1] + a[i-1][j] ;
					cout << a[i][j] << " ";
				}
				cout << endl ;
			}
		}
}
