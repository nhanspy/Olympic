#include <bits/stdc++.h>
#define dieukien (a[0][i] >= a[0][j] && a[0][i] <= a[1][j]) || (a[1][i] >= a[0][j] && a[1][i] <= a[1][j]) || (a[0][i] <= a[0][j] && a[1][i] >= a[1][j])
using namespace std;
/*
int main () {
	int n ;
	float a[2][100000] ;
	cin >> n ;
	for (int i = 0 ; i < n ; i++){
		cin >> a[0][i];
	}
	for (int i = 0 ; i < n ; i++){
		cin >> a[1][i];
	}
	int  dem = 0,maxx = 0;
	for (int i = 1 ; i < n ; i++){
		dem = 0;
		for (int j = 0 ; j < i ; j++){
			if (dieukien){
				dem ++;
			}
		}
		if (maxx < dem) maxx = dem ;
 	}
 	cout << maxx + 1;
}
*/
float a[2][1000];
void quicksort (int l, int r){
	int i = l , j = r ;
	int key = a[0][l + rand() %(r-l)];
	while (i <= j){
		while(a[0][i] < key) i++;
		while(a[0][j] > key) j--;
		if (i <= j) {
			swap(a[0][i],a[0][j]);
			swap(a[1][i],a[1][j]);
			i++;
			j--;
		}
	}
	if (i < r) quicksort(i , r);
	if (j > l) quicksort(l , j);
}

int main () {
	int n ;
	float t = 0 , d = 0 ;
	int dem = 0 , imax = 0;
	cin >> n ;
	for (int i = 0 ; i < n ; i ++) cin >> a[0][i] ;
	for (int i = 0 ; i < n ; i ++) cin >> a[1][i] ;
	//sort(a , a + n);
	quicksort(0,n-1);
	t = a[0][0] ; d = a[1][0] ;
	for (int i = 1 ; i < n ; i++){
		if (a[0][i] >= t && a[1][i] <= d) {
			t = a[0][i] ; d = a[1][i];
			dem++;
		} else {
			if (a[1][i] <= d){
				t = a[0][i] ; d = a[1][i];
				dem++;
			} else {
				if (a[1][i] > d) {
					t = a[0][i] ; d = a[1][i-1] ;
					dem++;
				} else {
					t = a[0][i]; d =a[1][i];
					if (dem > imax) imax = dem ;
					dem = 0;
				}
			}
		}
		
	}
}
