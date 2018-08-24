#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main () {
	int a[4] = {2 , 3 , 5 , 7};
	int T , b[100] ;
	cin >> T ;
	for (int i = 0 ; i < T ; i ++) {
		cin >> b[i] ;
	}
	int s = 0 ;
	for (int i = 0 ; i < T ; i ++) {
		s = b[i];
		if (b[i] == 1) cout << -1 << endl; 
		else {
			int n = 0 ,dem = 0;
			while ( s > 0 ){
				dem = 0 ;
				for (int j = 3 ; j >= 0 ; j -- ) {
					if ((s - a[j] > 1 || s - a[j] == 0 )&&(dem == 0)) {
						s = s - a[j] ;
						n ++ ;
						dem ++;
						break ;
					}
				}
			} cout << n <<endl;
		}
	}
	
}
