
#include <bits/stdc++.h>
using namespace std;

int n , a[2][1000000];

int max(int a , int b){
	return a > b ? a : b ;
}

void quicksort( int l , int r) {
	int key = a[0][l + rand() % (r-l+1)] ;
	int i = l , j = r ;
	
	while (i <= j) {
		while ( a[0][i] < key ) i++ ;
		while ( a[0][j] > key ) j-- ;
		if (i <= j) {
			swap(a[0][i] , a[0][j]) ;
			swap(a[1][i] , a[1][j]) ;
			i++;
			j--;
		}
	}
	if (j > l) quicksort(l , j);
	if (i < r) quicksort(i , r);
}

void quicksort2( int l , int r) {
	int key = a[1][l + rand() % (r-l+1)] ;
	int i = l , j = r ;
	
	while (i <= j) {
		while ( a[1][i] < key ) i++ ;
		while ( a[1][j] > key ) j-- ;
		if (i <= j) {
			swap(a[0][i] , a[0][j]) ;
			swap(a[1][i] , a[1][j]) ;
			i++;
			j--;
		}
	}
	if (j > l) quicksort(l , j);
	if (i < r) quicksort(i , r);
}

int main () {
	cin >> n ;
	for (int i = 0 ; i < n ; i++){
		cin >> a[0][i] >> a[1][i];
	}
	quicksort(0,n-1);
	int tmp = a[0][0] , itmp = 0 ,dem = 0 , iitmp = 0;
	
	for (int i = 0 ; i < n ; i++){
		if (a[0][i] != tmp || i == n - 1 ) {
			if (i == n - 1) {
				quicksort2(itmp, i );
			} else {
				quicksort2(itmp,i - 1) ;
			}
			tmp = a[0][i];
			itmp = i ;
		}
	}
	
	for (int i = 0 ; i < n ; i++){
		f[i] = 1;
		for (int j = 0 ; j < i ; j ++){
			if (a[i] > a[j]) {
				max()
			}
		}
	}
	
	
	cout << dem ;
	
	for (int i = 0 ; i < n ; i++){
		cout << a[0][i] << " " << a[1][i] << endl ;
	}
	
}

//7 1 3 2 6 1 4 5 6 3 4 6 7 2 3
