#include <iostream>
using namespace std;
int main (){
	double a, b ;
	cin >> a >> b ;
	long long int tong = 0;
	long long int tmp1 = (a > (int) a) ? (int)a + 1 : (int)a , tmp2 = b;
	tong = ((tmp2 + tmp1)*(tmp2 - tmp1 + 1))/2  ; 
	cout << tong ;
}
