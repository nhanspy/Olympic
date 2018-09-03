#include <iostream>
using namespace std;
int main () {
	int n , k ;
	cin >> n >> k ;
	int a[1000000], b[1000000] = {0};
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i] ;
		b[i] += a[i] + b[i - 1];
	}
	for (int i = 0 ; i < n ; i++) cout << b[i] ;
	
}
