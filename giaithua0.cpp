#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;
long int giaithua(int i) {
	if (i == 1) {
		return 1 ;
	}
	return i * giaithua(i - 1) ;
}

int main (){
	int n ;
	cin >> n ;
	string tich = to_string(giaithua(n));
	cout << tich ;
}
