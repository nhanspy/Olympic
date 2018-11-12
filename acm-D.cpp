#include <bits/stdc++.h>
using namespace std;

int a[10] = {0} ;

void quydoi(int n,int s){
	int tmp, so = s;
	while (so--) {
		tmp = n%10;
		a[tmp] ++;
		n /= 10;
	}
}

void trave(int n,int s){
	int tmp, so = s;
	while (so--) {
		tmp = n%10;
		a[tmp] --;
		n /= 10;
	}
}

bool nam(int n,int s) {
	int tmp, so = s;
	int b[10] = {0};
	while (so--) {
		tmp = n%10;
		if (a[tmp] - b[tmp] == 0) return false;
		n /= 10;
		b[tmp] ++;
	}
	return true;
}

int thang(int n,int m){
	if (n == 2) {
		if ( (m % 4 == 0 && m % 100 != 0) || m % 400 == 0 ) {
			return 29;
		} return 28;
	} else {
		if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12) return 31;
		else return 30;
	}
}

void in(int n,int s){
	if (s == 4) {
		if (n > 1000) cout << n;
		else 
			if (n > 100) cout << 0 << n;
			else 
				if (n > 10) cout << 0 << 0 << n;
				else cout << 0 << 0 << 0 << n ;
		cout << endl;
	} else {
		if (n > 10) cout << n;
		else cout << 0 << n;
		cout << " ";
	}
}


int main () {
	
	int t;
	cin >> t;
	int tmp ;
	while (t--) {
		
		for (int i  =0 ; i <= 9 ; i ++) a[i] = 0;
		int ba = 3;
		while (ba--) {
			cin >> tmp ;
			if (ba != 0) quydoi(tmp,2);
			else quydoi(tmp,4);
		}
		
		//for (int i  =0 ; i <= 9 ; i ++) cout << a[i];
		int v1,v2,v3 , dem = 0;
		for (int i = 1 ; i <= 9999 ; i ++){
			if (nam(i,4)){
				trave(i,4);
				for (int j = 1 ; j <= 12 ; j ++){
					if (nam(j,2)){
						trave(j,2);
						int m = thang(j,i);
						for (int k = 1 ; k <= m ; k ++){
							if ( nam(k,2) ) {
								dem ++;
								if (dem == 1) {
									v1 = k;
									v2 = j;
									v3 = i;
								}
							}
						}
						quydoi(j,2);
					}
				}
				quydoi(i,4);
			}
		}
		
		cout << dem <<" ";
		if (dem != 0) { in(v1,2); in(v2,2) ; in(v3,4) ;}
	}
}
