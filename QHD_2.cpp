#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,a[10000],b[1000];
	cin >> n;
	srand(time(0));
	for (int i = 0 ; i < n ; i++){
		a[i] = rand() % 15 ;
	}
	int s[1000] ;
	s[0] = 1 ;
	for (int i = 1 ; i < n ; i ++){
		int jmax = 0;
		int posmax = 0;
		for (int j = 0 ; j < n ; j ++){
			if (a[i] > a[j] )
				if (s[j] > jmax) {
					jmax = s[j];
					posmax = j;
				}
		}
		b[i] = posmax;
		s[i] = jmax + 1;
	}
	int maxx = 0,pos = 0;
	for (int i = 0 ; i < n ; i++){
		cout << a[i] <<"\t"<<s[i]<<"\t"<<b[i]<<endl ;
		if (s[i] > maxx) {
			maxx = s[i] ;
			pos = i ;
		}
	}
	cout << maxx <<endl;
	while (true) {
		cout << a[pos] <<"\t";
		pos = b[pos];
		if (b[pos] == 0){
			if (a[b[pos]] <= a[pos]) {
				cout << a[b[pos]] ;
				break;
			}
			else break;
		}
	}
}
