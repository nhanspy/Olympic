#include <iostream>
#include <math.h>
#include <algorithm>
#include <time.h>
using namespace std;
void quicksort(int *a, int l , int r) {
	srand(time(NULL));
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

int main (){
	int n , a[100000] , min = pow(10,9) ;
	cin >> n ;
	for (int i = 0 ; i < n ; i++) cin >> a[i] ;
	quicksort(a , 0 , n - 1);
	for (int i = 1 ; i < n ; i++) {
		if (a[i] - a[i - 1] < min) min = a[i] - a[i - 1];
	}
	cout << min ;
}
