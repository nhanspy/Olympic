#include <iostream>
using namespace std;
int main () {
	int n , m , a[100000] , j = 0 , i = 0 , l ,dem = 0;
	cin >> n >> m ;
	for (int i = 0 ; i < n ; i ++ ) cin >> a[i] ;
	while (i < n) {
		l = a[j] ;
			if (a[i] - l == m) {
				cout << l << " " << a[i] ;
				dem ++ ;
				break ;
			}
			else 
				if (a[i] - l > m) j++ ;	
				else i ++ ;	
	}
	if (dem == 0) cout << -1 ;
}
