#include <iostream>
#include <math.h>
using namespace std;
int main () {
	long long n ;
	cin >> n ;
	long long m = sqrt(n*2) ;
	(n*2 == m*(m + 1)) ? cout << "YES" : cout << "NO" ;
}
