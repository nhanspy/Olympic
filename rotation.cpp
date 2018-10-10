#include <bits/stdc++.h>
#define NMAX 1000010
using namespace std;

int A , B , N , kk = 0;

int nhan(int n){
	if (n >= 1000000) return 1000000 ;
	if (n >= 100000) return 100000 ;
	if (n >= 10000) return 10000 ;
	if (n >= 1000) return 1000 ;
	if (n >= 100) return 100 ;
	if (n >= 10) return 10 ;
	return 1;
}

int retate(int a){
	a = (a%10)*nhan(a) + a/10;
	return a;
}

int main () {
	int tmp , dem;
	cin >> N ;
	while(N--){
		cin >> A >> B ;
		dem = 0;
		//memset(K + A - 1, 0 , B - A + 2);
		int K[NMAX] = {0};
		
		for(int j = A ; j <= B ; j++){
			tmp = j;
			kk = nhan(j);
			while(kk /= 10){
				tmp = retate(tmp);
				
				if ( tmp <= B && tmp > j && !K[tmp] ){
					dem++;
					K[tmp] = 1;
				}
				
			}
		}
		
		cout << dem << endl;
	}
}
