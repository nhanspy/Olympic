#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int a, N ;
	long s ;
	do {
	cin >> a >> N ;
	} while (a > 100 && a <= 0 && N <= 0 && N > 1000000);
	s = pow(a,N);
	s = s % 10;
	s > 0 ? cout << s : cout << 0 ;
}	
