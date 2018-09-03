#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main (){
	int B[20] = {0};
	string a[13] ;
	// Nhap quang bai va chuyen sang mang B ;
	for (int i = 0 ; i < 13 ; i++ ) {
		cin >> a[i] ;
		if (a[i][0] == 84 ) B[9] ++;
		else 
			if (a[i][0] == 74) B[10] ++ ;
			else 
				if (a[i][0] == 81) B[11] ++ ;
				else 
					if (a[i][0] == 75) B[12] ++ ;
					else
						if (a[i][0] == 65) B[13] ++ ;
						else 
							if (a[i][0] == 50) B[14] ++ ;
							else B[a[i][0] - 48 - 1] ++ ;
	}
	//xet truong hop an trang ;
	int dem = 0 ;
	if (B[14] == 4) {
		cout << "YES" ;
		dem ++ ;
	} else {
		int xan = 0 , doithong = 0 ,ve = 0 ;
		for (int i = 2 ; i < 15  ; i++ ){
			if (B[i] == 0) {
				doithong = 0 ;
				xan = 0 ;
			} else 
				if (B[i] == 1) {
					xan ++ ;
					doithong = 0 ;
				}
				else 
					if (B[i] == 2 || B[i] == 3) {
						xan ++ ;
						ve ++ ;
						doithong ++ ;
					} else 
						if (B[i] == 4 ) {
							ve += 2 ;
							doithong ++ ;
							xan ++ ;
						}
			if (xan == 13 || doithong == 5 || ve == 6 ) {
				cout <<endl<<"YES" ;
				dem ++ ;
				break ;
			}
		}
	}
	if (dem == 0) cout <<endl<< "NO" ;
}
