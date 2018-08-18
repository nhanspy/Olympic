#include <iostream>
using namespace std;
int doiso(int &a , int &b ) {
	a = a + b ;
	b = a - b ;
	a = a - b ;
}

int main () {
	int a = 10 ;
	int b = 2;
	int d;
	cout << a << "\n" << b;
	d = doiso(a, b);
	cout << "\n " << a << " " << b << " " << d;
}
