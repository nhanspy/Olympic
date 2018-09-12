#include <bits/stdc++.h>
using namespace std;
int main (){
	int n , a[300000]  ,dem = 0 ;
	ifstream fi ("B08_1.inp");
	cin >> n ;
	for (int i = 0 ; i < n ; i ++){
		cin >> a[i] ;
		if (i > 0 ) {
			if (a[i] < a[i - 1] ) {
				if (dem == 0) {
					cout << i - 1 << " ";
					dem ++;
					if (i == n-1) {
						cout << i ;
						break;
					}
				} else {
					cout << i ;
				}
			}
		}
	}
}
