#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main () {
	int n , j = 0 , A[100];
	cin >> n;
	long double s = 1;
	for (int i = 1 ; i <= n ; i ++) s = s * i;
	while(s != 0){
		A[j] = s - ((int)s/10 )*10 ;
		cout << A[j] ;
		j++ ;
		s = (long long)s/10 ;
	}
	/*while (s != 0 && s - ((long long)s/10 )*10 == 0) {
		if (s - ((long long)s/10 )*10 == 0 ) t ++ ;
		s = (long long)s / 10 ;
	}
	cout << t ;*/
}
