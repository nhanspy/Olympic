#include <iostream>
#include <algorithm>
long long i , j , k ;
long long max(long long a , long long b){
	return a > b ? a : b;
}
long long value(long long a , long long b , long long c ){
	return a + b*2 + c*3;
}
void xet(long long a , long long b , long long c , long long d){
	long long t1 = value(a,b,c), t2 = value(a,b,d), t3 = value(a,c,d) ,
		t4 = value(b,c,d) , M = t1 ;
	M = max(M,t2);
	M = max(M,t3);
	M = max(M,t4);
	if (t2 == M) {
		k = d ;
	} else {
		if (t3 == M){
			j = c ; k = d;
		} else {
			if (t4 == M){
				i = b ; j = c ; k = d ;
			}
		}
	}
}


using namespace std;
int main (){
	long long n , a[1000000] = {0};
	cin >> n ;
	for (int t = 0 ; t < n ; t++){
		cin >> a[t];
		if (t >= 2) {
			if (t == 2) {
				k = a[2];
				j = a[1];
				i = a[0];
			} else {
				xet(i , j , k , a[t]);
			}
		}
	}
	cout << value(i , j , k);
}
