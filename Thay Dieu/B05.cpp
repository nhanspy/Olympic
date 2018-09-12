#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int a[100][100] , m , n, dem = 0 ;
int maxx = 0 ;
int d[][8] = {
	{-1 , -1 , -1 , 0 , 1 , 1 , 1 , 0},
	{-1 , 0 , 1 , 1 , 1 , 0 , -1 , -1} 
};
void loang(int u , int v ) {
	dem ++ ;
	a[u][v] = 0 ; //nhan chim de khoi trung lap
	for (int k = 0 ; k <= 7 ; k++){
		int h = u + d[0][k] , c = v + d[1][k] ;
		if (h >= 0 && h < m && c >= 0 && c < n && a[h][c] == 1)
			loang(h,c) ; // ham de qui
	}
}

int main () {
	//int max = 0;
	//ifstream fi ("B05.inp") ;  // doc du lieu trong file
	//fi >> n >> m ;
	srand(time(0)) ;
	m = 7 ; n = 7 ;
	for (int i = 0 ; i < m ; i ++ ){
		for (int j = 0 ; j < n ; j ++) {
			//fi >> a[i][j];
			a[i][j] = rand() % (2) ; //random gia tri 1-0
		}
	}
	for (int i = 0 ; i < m ; i ++ ){
		for (int j = 0 ; j < n ; j ++) {
			cout << a[i][j] << " " ;
		}
		cout << endl ;
	}
	int tong = 0 ;
	for (int i = 0 ; i < m ; i ++ ){
		for (int j = 0 ; j < n ; j ++) {
			if (a[i][j] == 1) {
				tong ++ ;
				dem = 0 ;// reset bien dem
				loang(i , j ) ;
				if (dem > maxx) maxx = dem ;
			}
		}
	}
	cout << tong <<" " <<maxx ;
}
