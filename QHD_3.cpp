#include <iostream>
using namespace std;

int max(int a , int b) { return a > b ? a : b ; }

int main () {
	int n;
	int a[1000];
	cin >> n;
	for (int i = 0 ; i < n ; i ++ ){
		cin >> a[i] ;
	}
	
	int s[1000] = {0} ;
	s[0] = 1;
	for (int i= 1 ; i < n ; i ++) {
		for (int j = 0 ; j < i ; j ++){
			if (a[i] >= a[j]) s[i] = max(s[i] , s[j] + 1);
		}
	}
	
	int value = 0;
	for (int i = 0 ; i < n ; i ++) value = max(s[i],value);
	cout << value ;
}
