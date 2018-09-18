#include <iostream>
#include <algorithm>
using namespace std;
int a[2][1000000];
void quicksort(int l , int r){
	int key = a[0][l + rand()%(r-l)];
	int i = l , j = r ;
	while (i <= j){
		while (a[0][i] < key) i++ ;
		while (a[0][j] > key) j-- ;
		if (i <= j){
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
	cin >> n;
	int vitri = 0 , vitri_tmp ,dem = 0;
	for (int index = 0 ; index < n ; index ++){
		cin >> a[0][index] >> a[1][index] ;
	}
	quicksort(0,n-1);
	
	for (int i = 0 ; i < n ; i++) cout << a[0][i] << " " << a[1][i] << endl;
	for (int i = 1 ; i < n ; i++){
		for (int j = i - 1 ; j >= vitri ; j--){
			if (a[0][i] < a[1][j]) {
				vitri_tmp = j ;
				dem ++ ;
			} else {
				if (i == j + 1) vitri_tmp = j ;
				break ;
			}
		}
		vitri = vitri_tmp;
	}
	cout << dem ;
}
