#include <bits/stdc++.h>
using namespace std;
int max(int a , int b){
	return (a > b)?a:b;
}

int main () {
	int n , a[1001] , f[1001] ;
	int maxt = 0;
	
	cin >> n ;
	for (int i = 0 ; i < n ; i++){
		cin >> a[i] ;
		f[i] = 1;
		for (int j = 0 ; j < i ; j ++){
			if (a[i] > a[j]) f[i] = max(f[i],f[j] + 1);
		}
		if (maxt < f[i]) maxt = f[i] ;
	}
	
	cout << maxt ;
}
