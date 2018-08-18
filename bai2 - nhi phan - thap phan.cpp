#include <iostream>
using namespace std;
int main () {
	int n , thapphan ;
	cin >> n ;
	while (n != 0) {
		thapphan = n % 2;
		cout << thapphan << " " ;
		n = n / 2;
	}
}
