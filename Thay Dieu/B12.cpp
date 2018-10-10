#include <iostream>
#include <algorithm>
using namespace std;
int n , a[100000] , str[100000] = {0} , b[100000];
int tree(int l,int r,int id){
	if (l == r ) {
		return str[id] = a[l];
	}
	int mid = (l+r)/2;
	tree(l,mid,id*2);
	tree(mid + 1,r,id*2+1);
	return str[id] = a[(l - r + 1)/2 + 1];
}
int main () {
	cin >> n ;
	for (int i = 0 ; i < n ; i ++){
		cin >> a[i];
	}
	sort(a,a+n);
	int kc = 0 ,dem = 0;
	while (kc < n){
		for (int i = kc ; i < n ; i ++){
			//cout << b[dem-1];
			b[dem++] = a[i + 1 + kc/2 + 1];
			//cout << dem ;
		}
		kc++;
	}
	for (int i = 0 ; i < dem ; i ++){
		cout << b[i] << " ";
	}
	
	cout << dem - 1 ;
}
