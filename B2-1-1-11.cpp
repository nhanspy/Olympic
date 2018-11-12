#include <iostream>
using namespace std;

int n , a[1000] , t ,L[1000][1000] ;

int main () {
	cin >> m ;
	for (int i = 0 ; i < n ; i++){
		cin >> a[i] ;
	}
	cin >> t;
	for (int i = 0 ; i < n) {
		L[i][0] = i+1;
		L[0][i] = i+1;
	}
	
}
