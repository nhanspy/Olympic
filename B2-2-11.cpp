#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int a[101][101] = {0}, f[101][101] = {0};

int max(int a , int b ){ return a > b ? a : b ;}
int max(int a , int b , int c ){ return max(max(a,b),c) ;}

int main () {
	srand(time(0));
	
	int n , m ;
	cin >> n ;
	m = n;
	
	for (int i = 0 ; i < n ; i ++){
		for (int j = 0 ; j < m ; j++){
			a[i][j] = rand() % 16;
		}
	}
	
	for (int i = 0 ; i < m ; i ++){
		f[0][i] = a[0][i];
	}
	
	for (int i = 1 ; i < n ; i ++){
		for (int j = 0 ; j < m ; j ++){
			f[i][j] =  a[i][j] + max( f[i-1][j-1] , f[i-1][j] , f[i-1][j+1] );
		}
	}
	
	int value = -99999;
	for (int i = 0 ; i < m ; i++){
		value = max(value,f[n-1][i]);
	}
	for (int i = 0 ; i < n ; i ++){
		for (int j = 0 ; j < m ; j ++){
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	
	cout << endl;
	for (int i = 0 ; i < n ; i ++){
		for (int j = 0 ; j < m ; j ++){
			cout << f[i][j] << "\t";
		}
		cout << endl;
	}
	
	cout << value;
	
}
