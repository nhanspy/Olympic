#include <iostream>
#include <math.h>
#define m 1000000007
using namespace std;
int tong(double &n) {
	int x ;
	n = n/1 ;
	x = (n*(n + 1))/2 ;
	return x ;
}

int main (){
	double N, sum = 0 ,A[100007], B[100007] ;
	cin >> N ;
	for (int i = 0 ; i < N + 1 ; i++){
		cin >> B[i] ;
	}
	for (int i = 0 ; i < N ; i++) {
		A[i] = B[i + 1] / B[i] ;
		sum += tong(A[i]) ;
	}
	cout << tong(sum);
}
