#include <iostream>
#include <string>
using namespace std;
int main () {
	int dau = -1 ,dem = 0;
	string n ;
	getline(cin,n) ;
	int m = n.length() ;
	for (int i = 0 ; i < m ; i ++){
		if (n[i] != 32) {
			if (dau == -1) {
				dau *= -1 ;
				dem ++ ;
			}
		} else if (dau == 1) dau *= -1 ;
	}
	cout << dem ;
}
