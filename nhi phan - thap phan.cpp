#include <iostream>
#include <math.h>
using namespace std;

int main () {
	int A[100] = {0} , n, dem = 0, s = 0;
	cin >> n ;
	while (n != 0) {
		A[dem] = n % 10;
		dem++ ;
		n = n / 10 ;
	}
	for (int i = 0 ; i < dem ; i ++){
		s = s + pow(2,i) * A[i];
	}
	cout << s ;
}
