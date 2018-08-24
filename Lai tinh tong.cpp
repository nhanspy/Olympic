#include <iostream>
#include <math.h>
#define m 1000000007
using namespace std;
int tong(long long &n) {
	int x ;
	n = n/1 ;
	x = (n*(n + 1))/2 ;
	x /= m ;
	return x ;
}

int main (){
	long long sum = 0, A[100007];
	double N , B[100007] ,k ;
	int tich = 1 ;
	cin >> N ;
	for (int i = 0 ; i < N  ; i++){
		cin >> B[i] ;
	}
	for (int i = 0 ; i < N - 1; i++) {
		tich %= m;
		k = 0 ;
		if (B[i+1] / B[i] < 1) k = 1 ;
		A[i] = (B[i + 1] + m*k )/ (B[0] * tich);
		tich *= A[i] ;
		sum += tong(A[i]) ;
		cout << A[i] << endl;
	}
	cout << tong(sum);
}
