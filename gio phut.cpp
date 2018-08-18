// cho gio va phut bat dau, va ket thuc , hoi tu dau den ket thuc cham nhau may lan.
#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	int  x, y, a, b;
	cin >> x >> y ;
	y = x + y/60;
	cout << "tg ket thuc " ; cin >> a >> b ;
	b = a + b/60;
	cout<<(b - y)/(1.0909090909); 
}
