#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
void quicksort(int *a, int l , int r) {
	int key = a[l + rand() % (r-l+1)] ;
	int i = l , j = r ;
	
	while (i <= j) {
		while ( a[i] > key ) i++ ;
		while ( a[j] < key ) j-- ;
		if (i <= j) {
			swap(a[i] , a[j]);
			i++;
			j--;
		}
	}
	if (j > l) quicksort(a , l , j);
	if (i < r) quicksort(a , i , r);
}

int main () {
	int n , a[100] ;
	cin >> n ;
	for (int i = 0 ; i < n ; i ++ ){
		cin >> a[i] ;
	}
	
	quicksort(a , 0 , n - 1);

	int trong , dem  =0;
	trong = a[0];
	if 	(trong == 0) cout << 1 ; 
	else {
		for (int i = 1 ; i < n ; i ++ ){
			if ( (a[i] + i + 1 ) <= trong ) {
				trong = a[i] + i + 1 ;
				dem ++ ;
			}
		}
		if (trong >= n) cout << n ;
		else 
			if (dem == 0) cout << trong + 1 ;else cout << trong ;
	}
}

