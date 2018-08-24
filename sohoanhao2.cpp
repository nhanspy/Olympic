#include <iostream>
#include <math.h>
using namespace std;

int main (){
	long long n, s = 0 ;
	cin >> n ;
	cout << n ;
	for (long long i = n/2 ; i >= 1 ; i --) {
		if (n % i == 0) s += i;
		if (s >= n) {
			break ;
		}
	}
	s == n ? cout << "YES" : cout<< "NO" ;
}
