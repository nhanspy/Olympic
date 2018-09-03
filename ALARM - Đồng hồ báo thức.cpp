#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
struct boss {
	int hh1 = -1 ;
	int hh2 = -1;
	int mm1 = -1;
	int mm2 = -1;
} ;
struct boss thoigian ;

int gio (int n , int a[] , boss) {
	int haha = 0 ;
	for (int h1 = 0 ; h1 <= 2 ; h1 ++){
		haha =  (h1 == 2)? 3: 9 ;
		for (int h2 = 0 ; h2 <= haha ; h2 ++){
			for (int m1 = 0 ; m1 <= 5 ; m1 ++){
				for (int m2 = 0 ; m2 <= 9 ; m2 ++){
					if (a[h1] + a[h2] + a[m1] + a[m2] == n) {
						thoigian.hh1 = h1 ;
						thoigian.hh2 = h2 ;
						thoigian.mm1 = m1 ;
						thoigian.mm2 = m2 ;
						return 0;
					}
				}
			}
		}
	}
}

int main () {
	int n ;
	cin >> n ;
	int a[10] = {6 , 2 , 5 , 5 ,4 ,5 ,6 ,3 , 7 ,6} ;
	gio(n , a ,thoigian);
	(thoigian.hh1 == -1 && thoigian.hh2 == -1 && thoigian.mm1 == -1 && thoigian.mm2 == -1 ) ?
	cout << "Impossible" :
	cout << thoigian.hh1 << thoigian.hh2 <<':'<< thoigian.mm1 << thoigian.mm2 ;
	
}
