#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	int n , k ;
	cin >> n >> k ;
	int a[100000] , dem = 0 ;
	for (int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	
	int l = 0, r = 1 ;
	while (r < n) {
		if (a[r] - a[l] <= k) {
			if (a[r] - a[l] == k) dem++;
			r++;
		} else l++;
	}
	cout << dem ;
}
