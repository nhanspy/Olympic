#include <iostream>
#include <math.h>
#include <algorithm>
#include <time.h>
long long xuat(long long b[] ,long long N , long long K) {
	long long dem = 0 ;
	long long n = 1 , m = N ;
	while (m != n) {
		dem ++;
		while (m <= N) {
			if ((b[m] - b[n - 1])%K == 0) return m - n + 1 ;
			else 
				if (m == N) {
					n = 1 ;
					m = N - dem ;
					break ;
				} else {
					n++ ;
					m++ ;
				}
		}
	}
	return N ;
}

using namespace std;
int main() {
	long long N, K;
	cin >> N >> K;
	long long a[100000] ,b[100000] = {0};
	//--- Nhap mang
	for (int i = 0 ; i  < N ; i++){
		cin >> a[i];
		b[i + 1] = a[i] + b[i] ;
	//	cout << b[i + 1]<< " ";
	}
	cout << xuat(b, N ,K) ;
}
