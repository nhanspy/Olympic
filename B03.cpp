#include <iostream>
#include <fstream>
using namespace std;
int main () {
	int n , a[100000] , b[100000] = {0};
	ifstream fi("/home/nhan/Olympic/Thay Dieu/B03.inp");
	fi >> n;
	int l = 0 , max = 0 , imax = 0 , imin = 0 ,dem =0 ;
	for (int i = 0 ; i < n ; i++){
		fi >> a[i] ;
		b[i] = a[i] + b[i - 1];
		if (b[i] >= 0){
			if (b[i] - b[l - 1] > max) {
				max = b[i] - b[l - 1];
				imin = a[l] ;
				imax = a[i] ;
				dem++;
			}
		} else l = i + 1 ;
	}
	if (dem == 0) cout << b[n-1] <<" "<< a[0] << " "<< a[n - 1] ;
	else
		cout << max << " "<< imin << " "<< imax ;
	
}
// 9 3 -5 9 2 -1 4 -20 7 2

