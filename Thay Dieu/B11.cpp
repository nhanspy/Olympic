#include <iostream>
#include <algorithm>
#include <fstream>
#include <time.h>
using namespace std;
int a[100007] ,n ;
bool search (int d ,int l, int r,int &dc){
	int mid = (l + r)/2;
	if (l > r) return false;
	else{
		if (d == a[mid]) {dc = mid; return true;}
		else
			if (d < a[mid] && l <= r) return search(d,l,mid - 1,dc);
			else
				if (d > a[mid] && l <= r) return search(d,mid + 1,r,dc);
				else return false;
		}
}
int main () {
	clock_t bd = clock();
	ifstream fi ("/home/nhan/Downloads/B11.in");
	fi >> n ;
	for (int i = 0 ; i < n ; i ++) fi >> a[i];
	sort(a,a+n);
	int dem =0 ,tmp,max = 0,dc;
	//for (int i = 0 ; i < n ; i ++) cout << a[i] << " ";
	//cout<<endl;
	for (int d = 1 ; d <= 99 ; d++){
		dc = 0;
		if (a[0] + d > a[n-1]) break;
		for (int i = 0 ; i < n ; i ++) {
			dc = i;
			tmp = a[i] + d;
			dem = 1;
			while (tmp <= a[n-1]) {
				cout << tmp << " ";
				if(search(tmp,i,n-1,dc)) {
					dem++;
					tmp += d;
				} else break;
			}
			cout << dc ;
			i = dc ;
			if (dem > max) max = dem;
			cout << max << endl;
		}
	}
	clock_t kt = clock();
	cout << max  << " "<< (float) kt - bd;
}

