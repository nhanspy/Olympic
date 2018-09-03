#include <iostream>
#include <algorithm>
using namespace std ;
void quicksort(int *a, int l , int r) {
	int key = a[l + rand() % (r-l+1)] ;
	int i = l , j = r ;
	
	while (i <= j) {
		while ( a[i] < key ) i++ ;
		while ( a[j] > key ) j-- ;
		if (i <= j) {
			swap(a[i] , a[j]) ;
			i++;
			j--;
		}
	}
	if (j > l) quicksort(a , l , j);
	if (i < r) quicksort(a , i , r);
}
int main () {
	int m , n ;
	cin >> n >> m ;
	int a[100007][2] , b[100007];
	for (int i = 0 ; i < n ; i ++) {
		cin >> b[i] ;
	}
	for (int i = 0 ; i < m ; i ++) {
		cin >> a[i][0] ;
		cin >> a[i][1] ;
	}
	//xong phan nhap 
	for (int i = 0 ; i < m ; i ++) {
		//int min = 1000000010 ;
		int c[100007] = {0} ;
		for (int j = a[i][0] - 1 ; j <= a[i][1] - 1 ; j ++ ){
			c[j] = b[j];
			//cout << c[j] ;
		}
		quicksort(c , a[i][0] - 1 , a[i][1] - 1 ) ;
		cout << c[a[i][0] - 1] << endl;
	}
}
