#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;


int main () {
	int N, K;
	cin >> N >> K;
	long long a[100000] ,b[100000] = {0};
	//--- Nhap mang
	for (int i = 0 ; i  < N ; i++){
		cin >> a[i];
		b[i + 1] = a[i] + b[i] ;
	//	cout << b[i + 1]<< " ";
	}
	//--- Xet
	int max = N , min = 1 , m = 1 ,n  = 1 , lonnhat = 0;
	while (max != min) {
		while (m < max) {
			m ++ ;
			if ((b[m] - b[n - 1] )%K == 0) 
			if ((m - n + 1) > lonnhat) lonnhat = m - n + 1 ;
			if ( m == max ) {
				while (n < max) {
					n++ ;
					if ((b[m] - b[n - 1] )%K == 0) 
					if ((m - n + 1) > lonnhat) lonnhat = m - n + 1 ;
					if (n == max) {
						min++;
						while (n > min) {
							n -- ;
							if ((b[m] - b[n - 1] )%K == 0) 
							if ((m - n + 1) > lonnhat) lonnhat = m - n + 1 ;
							if ( n == min ) {
								while (m > min) {
									m -- ;
									if ((b[m] - b[n - 1] )%K == 0) 
									if ((m - n + 1) > lonnhat) lonnhat = m - n + 1 ;
									if (m == min) {
										max--;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << lonnhat ;
	
}
