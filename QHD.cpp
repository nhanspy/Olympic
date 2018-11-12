#include <bits/stdc++.h>
using namespace std;

int min(int a , int b) {return a < b ? a : b ;}

void C1 () {
	int n , m , s[1000] , f[10000];
	cin >> n >> m ; // Nhap tien va so to tien
	
	for (int i = 0 ; i < m ; i ++){
		cin >> s[i] ; // Nhap menh gia tien
	}
	
	f[0] = 0;
	for (int i = 1 ; i <= n ; i ++){
		f[i] = INT_MAX;
		for (int j = 0 ; j < m ;  j ++) {
			if (s[j] <= i )
				f[i] = min( f[i - s[j]] + 1 , f[i] );
		}
		cout << f[i] << " " ;
	}
	cout << f[n];
}

void C2 () {
	int n , m , s[1000] , f[1000] ;
	cin >> n >> m ; // Nhap tien va so to tien
	
	for (int i = 0 ; i < m ; i ++){
		cin >> s[i] ; // Nhap menh gia tien
	}
	
	for (int i = 1 ; i <= n ; i ++) f[i] = INT_MAX ;
	
	int tmp;
	f[0] = 0;
	for (int i = 0 ; i  <= n ; i ++){
		
		for (int j = 0 ; j < m ; j ++){
			tmp = i + s[j] ;
			f[tmp] = min( f[i] + 1 , f[tmp] );
		}
	}
	cout << f[n] ;
	
}

int main () {
	C2();
}
