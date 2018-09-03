#include <iostream>
using namespace std;
int main(){
	int n ,s =0;
	cin >> n ;
	int k;
	for (int i = 1 ; i <= n ; i ++){
		k = i ;
		while (k%5 == 0){
			s++ ;
			k /= 5 ;
		}
	}
	cout << s ;
}
