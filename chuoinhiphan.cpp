#include <iostream>
#include <math.h>
using namespace std;
void traodoi(int &a , int &b){
	int tmp = a ;
	a = b ;
	b = tmp ;
}

int main (){
	int n , j = 0, A[100] = {0}, s = 0 , the;
	cin >> n ;
	for (int i = 0 ; i < n ; i ++) s = s + pow(2,i);
	for (int i = 0 ; i <= s  ; i ++) {
		the = i ;
		for (int k = 0 ; k < n ; k ++) A[k] = 0 ;
		while (the != 0) {
			A[j] = the % 2;
			the = the/2;
			j++ ;
		}
		for (int k = 0 ; k < n/2 ; k ++) traodoi(A[k],A[n - 1 - k]);
		for (int k = 0 ; k < n ; k ++) cout << A[k] ;
		cout << endl;
		j = 0 ;
	}
}
