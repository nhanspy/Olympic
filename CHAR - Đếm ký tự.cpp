#include <iostream>
#include <string>
using namespace std;
int main () {
	string n ;
	getline(cin,n) ;
	int max = n[0] , min = n[0] , a[1000] = {0} , dem = 0;
	int m = n.length() ;
	for (int i = 0 ; i < m ; i ++ ){
		int j = n[i] ;
		a[j] ++ ;
		if (j > max) max = j ;
		if (j < min) min = j ;
	}
	for (int i = min ; i <= max ; i++){
		if (a[i] > 0) dem ++ ;
	}
	cout << dem ;
}
