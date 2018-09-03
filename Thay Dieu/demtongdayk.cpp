#include <iostream>
#include <fstream>
using namespace std;
int main () {
	int n , k , a[1000000] , b[1000000] = {0} ;
	ifstream fi("B01.inp");
	fi >> n >> k ;
	//cin >> n >> k ;
	for (int i = 0 ; i < n ; i ++) {fi >> a[i] ;}
	ofstream fo("B01.out");
	int max , min ;
	for (int i = 0 ; i < n ; i ++) {
		if (i == 0) {
			max = a[i] ;
			min = a[i] ;
		}
		b[a[i]] ++ ;
		if (a[i] > max) max = a[i] ;
		if (a[i] < min) min = a[i] ;
	}
	int dem = 0 ;
	for (int i = min ; i <= max ; i ++) {
		//cout << b[i] ;
		if (i == k - i) {
			//cout << b[i] ;
			while (b[i] != 0) {
				//cout << b[i] ;
				b[i] -- ;
				dem += b[i] ;
				//cout << " "<<dem ;
			}
		} else
			if ((b[i] > 0) && (b[k - i] > 0) ) {
				dem = dem + b[i] * b[k - 1] ;
				b[i] = 0 ;
				b[k - i] = 0 ;
			}
	}
	cout << dem ;
	fo << dem ;
	fo.close () ;
}
