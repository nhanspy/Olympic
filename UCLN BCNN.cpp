#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int a , b ;
	cin >> a >> b ;
	for (int i = sqrt(a) ; i >= 1 ; i -- ) {
		if (a % i == 0 && b % i == 0) {
			cout <<"UCLN= "<< i ; break ;
		}
	}
	for (int i = a ; i <= a*b ; i ++){
		if (i % a == 0 && i % b == 0) {
			cout << "\nBCNN= "<< i ; break;
		}
	}
}
