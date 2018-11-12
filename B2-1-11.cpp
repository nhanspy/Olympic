#include <iostream>
using namespace std;

int a[1000];
int t,n;

int L(int i , int t){
	
	if (t < a[i]) return L(i - 1,t);
	else return min(L(i-1 , t),L(i , a[i] - t) + 1);
	
}

int main() {
	cin >> t ;
	cin >> n ;
	for (int i = 0 ; i < n ; i ++){
		cin >> a[i];
	}
	cout << L(n - 1, t);
}
