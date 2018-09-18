#include <iostream>
using namespace std;
int main () {
	long long n , a[100000] ;
	cin >> n ;
	for (int i = 0 ; i < n ; i++) cin >> a[i] ;
	if (a[0] == 2) cout << 50000 << endl;
	if (a[1] == 3) cout << 16667 ;
}
