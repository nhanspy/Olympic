#include <iostream>
#include <string.h>
using namespace std;

int max(int a, int b){
	return a>b?a:b;
}

int dx(string s){
	int n = s.length();
	int a[100][100] = {0};
	for (int i = 0 ; i < n ; i++) {
		a[i][i] = 1;
	}
	
	for (int i = n - 2 ; i >= 0 ; i--){
		for (int j = i + 1 ; j < n ; j++){
			if (s[i] == s[j]) a[i][j] = 2 + a[i+1][j-1];
			else a[i][j] = max(a[i][j-1],a[i+1][j]);
		}
	}
	return a[0][n-1];
}


int main () {
	string s;
	cin >> s ;
	cout << dx(s);
}
