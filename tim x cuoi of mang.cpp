#include <iostream>
using namespace std;
int main () {
	int n;
	cin >> n;
	int A[n], s = 0, x, t = 0;
	cout<< "Nhap mang \n";
	for (int i = 0; i < n ; i++) {
		cin >> A[i];
	}
	while ( s == 0 ) {
		cout << "nhap x : " ; cin >> x; 
		for (int i = 0; i < n ; i++) {
				if (x == A[i]) {
					s = s + 1;
					if ( t == 0 ) {
						cout << "Vi tri thu : "<< i ;
						t ++ ;
					} else {
						cout << ", " << i ;
					}
				} 
		}
	}
	
}
