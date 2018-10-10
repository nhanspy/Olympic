#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int max(int a, int b){ return a>b?a:b; }
int min(int a, int b){ return a<b?a:b; }

int a[100000] = {0}, maxi = -9999999,t = 1;

bool NT(int n){
	if (n <= 1) return false;
	for (int i = 2 ; i <= sqrt(n) ; i++ ){
		if (n % i == 0) return false;
	}
	return true;
}

void XD(int n){
	int tmp;
	
	for (int i = 2 ; i <= sqrt(n) ; i++){
		if (n % i == 0){
			tmp = (n / i + 1)*(i - 1);
			
			if (a[tmp] == 0) {
				if (tmp > maxi) maxi = tmp;
				t++;
				a[tmp] ++;
				XD(tmp);
			}
		}
	}
}

int main () {
	int n ;
	cin >> n ;
	XD(n);
	cout << t <<endl<< 0 << " ";
	for (int i = 1 ; i <= maxi ; i++) {
		if (a[i] > 0) cout<< i << " " ;
	}
}
