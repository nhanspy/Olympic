#include <iostream>
#include <fstream>
using namespace std;
int main () {
	int n , s , a[3000] , b[100000] = {0} ,tmp ;
	ifstream fi ("B06.inp");
	cin >> n >> s;
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i] ;
		b[a[i]] ++ ;
	}
	for (int i = 0 ; i < n - 3 ; i++){
		for (int j = i + 1 ; j < n - 2; j ++){
			tmp = s - a[i] - a[j] ;
			if (b[tmp] > 0) {
				cout << a[i] <<" "<< a[j] <<" "<< a[tmp] << endl ;
				b[tmp]--;
			}
		}
	}
}
//5 -5 10 100 10 -5
