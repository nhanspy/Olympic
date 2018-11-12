#include <iostream>
using namespace std;
int main () {
	int a[1000];
	
	int n,p1,p2;
	cin >> n;
	
	a[0] = 1;
	a[1] = 1;
	
	for (int i = 2 ; i <= n ; i++){
		p1 = 1;
		for (int j = 1 ; j < i ; j ++){
			p2 = a[j];
			a[j] = p2 + p1;
			p1 = p2;
		}
		a[i] = 1;
	}
	
	int k;
	cin >> k;
	cout << a[k];
}
