#include <iostream>
using namespace std;
int LSC(string X , string Y){
	
	int m = X.length() , n = Y.length() ;
	for (int i = 1 ; i <= m ; i++)
		for (int j = 1 ; j <= n ; j++)
			if (X[i - 1] == Y[j - 1]) a[i][j] = 1 + a[i - 1][j - 1];
			else a[i][j] = max(a[i][j-1],a[i-1][j]) ;
	return a[m][n] ;
}

int main () {
	
}
