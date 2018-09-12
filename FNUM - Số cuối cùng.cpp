#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;
string dequy(string n){
	if (n.length() == 1) return n ;
	long long tong = 0;
	int m = n.length();
	for (int i = 0 ; i < m ; i++){
		tong += n[i] - 48;
	}
	//cout << tong << " " ;
	ostringstream tong2 ;
	tong2 << tong ;
	return dequy(tong2.str()) ;
}


int main () {
	string n ;
	cin >> n ;
	cout<< dequy(n) ;
}
