#include <iostream>
using namespace std;
int main () {
	float a , b ;
	//long long c ;
	long double tong = 0 ;
	cin >> a >> b ;
	if (a > (long long) a ) a = (long long)a ;
	else a = (long long)a - 1;
	b = (long long)b ;
	cout << a << b << " ";
	tong = (long long)(b*(b + 1))/2 - ((long long)(a*(a + 1))/2 );
	cout << (double)tong ;
}
