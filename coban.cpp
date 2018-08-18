#include <iostream>
using namespace std;
void daonguoc(int &a , int &b){
	a = a + b;
	b = a - b;
	a = a - b;
}

int main (){
	int A[100], n , dem = 0 , s = 0 , so = 0 , ss , t = 0, j ;
	cin >> n ;
	while (n != 0) {
		A[dem] = n % 10;
		n /= 10 ;
		s += A[dem];
		dem ++ ;
	}
	
	for (int i = 0 ; i <= dem/2 - 1 ; i ++){
		daonguoc(A[i],A[dem - 1 - i]);
	}
	
	while (t <= dem - 2) {
		for (int i = t ; i <= dem - 2 ; i ++){
			ss = s ;
			j = t;
			while (j <= i) {
				ss -= A[j] ;
				j++;
			}
			if (ss % 3 == 0) so ++ ;
			if (i == dem - 2) t ++ ;
		}
	} cout << so << endl;
	for (int i = dem - 1 ; i >= 1 ; i --){
			ss = s ;
			j = dem - 1;
			while (j >= i) {
				ss -= A[j] ;
				j--;
			}
			if (ss % 3 == 0) so ++ ;
	}
	cout << so ;
}
	
