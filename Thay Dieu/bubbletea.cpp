#include <bits/stdc++.h>
#define NMAX 10000005
#define ll long long int
using namespace std;

int max(ll a , ll b) {
	return a > b ? a : b ;
}

ll A[2][NMAX] , B[NMAX] , cc , n , m , c , mint , tmin = LONG_LONG_MAX ;

int main () {
	cin >> n ;
	for (int i = 0 ; i < n ; i ++){
		cin >> A[0][i];
	}
	cin >> m ;
	for (int i = 0 ; i < m ; i ++){
		cin >> B[i];
	}
	
	
	for (int i = 0 ; i < n ; i++){
		cin >> c ;
		A[1][i] = LONG_LONG_MAX;
		for (int j = 1 ; j <= c ; j ++){
			cin >> cc;
			cc--;
			if (B[cc] < A[1][i]) A[1][i] = B[cc];
		}
		if (A[1][i] + A[0][i] < tmin) tmin = A[1][i] + A[0][i];
	}
	
	ll s = 0, k = 0 , tien;
	cin >> tien ;
	
	while (1) {
		s = tmin * k;
		k++;
		if(s == tien) {
			k--;
			break;
		} else if ( s > tien ){
			k -= 2;
			break;
		}
	}
	
	k = max(1,k);
	cout << k - 1;
}
