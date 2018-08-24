#include <iostream>
#include <math.h>
#include <algorithm>
#include <time.h>
using namespace std;
void quicksort(int a[100007][2] ,int l ,int r){
	srand(time(NULL)) ;
	int key = a[l + rand()%(r - l + 1)][1];
	int i = l ;
	int j = r ;
	while (i <= j) {
		while (a[i][1] < key) i++ ;
		while (a[j][1] > key) j-- ;
		if (i <= j) {
			swap(a[i][1],a[j][1]) ;
			swap(a[i][2],a[j][2]) ;
			i++ ;
			j-- ;
		}
	}
	if (l < j) quicksort(a , l , j);
	if (i < r) quicksort(a , i , r);
	
}

int main (){
	int n;
	int a[100007][2] ;
	int max = 0, min = 0 , s = 0;
	cin >> n;
	for (int  i = 0 ; i < n ; i ++) {
		cin >> a[i][1] >> a[i][2] ;
	}
	quicksort(a , 0 , n - 1);
	for (int  i = 0 ; i < n ; i ++) {
			if (a[i][1] > max) {
				s = s + max - min ;
				max = a[i][2] ;
				min = a[i][1] ;
			}else if (a[i][2] > max) max = a[i][2] ; 
	} 
	cout <<  s + max - min ;
}
