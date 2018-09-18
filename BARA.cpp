#include <iostream>
using namespace std;
int main (){
	int n , k ;
	 cin >> n >> k ;
	int tong = (n / k)*2 ;
	if (n%k != 0) {
		if ((n % k)*2 <= k) tong += 1 ; else tong += 2 ;
	}
	cout << tong*5;
}
