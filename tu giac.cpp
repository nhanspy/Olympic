#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main () {
	int a , b , c , d ;
	cin >> a >> b >> c >> d ;
	if ( a != c && b != d ) {
		int canh = abs(a - c) ;
		int p = b , q = d  ; 
		if (q + p > canh && canh + p > q && canh + q > p){
			if ( canh*canh + p*p == q*q || canh*canh + q*q == p*p ){
				cout << "Thang Vuong" ;
			}
			else {
				if ( abs(p*p - q*q) > canh*canh ) cout << "Tu G Thuong" ;
				else cout << "Hinh Thang" ;
			}
		}else {
			canh = abs(b - d) ;
			int p = a , q = c  ; 
			if (q + p > canh && canh + p > q && canh + q > p){
				if ( canh*canh + p*p == q*q || canh*canh + q*q == p*p ){
					cout << "Thang Vuong" ;
				}
				else {
					if ( abs(p*p - q*q) > canh*canh ) cout << "Tu G Thuong" ;
					else cout << "Hinh Thang" ;
				}
			}else cout << "Tu G Thuong" ;
		}
	}
	else {
		if (a == c && d == b && a == b) {
			if (a*a + b*b == c*c + d*d) cout << "H Vuong" ;
			else cout << "H Thoi" ;
		} else
			if (a == c && d == b && a != b ) {
				if (a*a + b*b == c*c + d*d) cout << "HCN" ;
				else cout << "H B Hanh";
			} else 
				if (a == c ) 
					if (a*a - (abs(b - d)/2)*(abs(b - d)/2) == c*c - (abs(b - d)/2)*(abs(b - d)/2) ) cout << "HT Can" ;
					else cout << "TG Thuong" ;
				else 					
					if (b*b - (abs(a - c)/2)*(abs(a - c)/2) == d*d - (abs(a - c)/2)*(abs(a - c)/2) ) cout << "HT Can" ;
					else cout << "TG Thuong" ;
	}
}
