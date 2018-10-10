#include <iostream>
#include <math.h>
using namespace std;

bool DX(int a){
	int dem = 0,tmp = a , t = 0 , tmp2;
	while (tmp) {
		tmp /= 10;
		dem ++;
	}
	
	dem--;
	tmp = a;
	
	while (tmp) {
		tmp2 = pow(10,(dem));
		dem -= 2;
		if (tmp%10 != tmp/tmp2) {
			t ++ ;
			return false;
		}
		tmp %= tmp2;
		tmp /= 10;
	}
	if (t != 0) return false;
	return true;
}

bool NTDX(int a){
	if (DX(a)){
		for (int i = 2 ; i <= sqrt(a) ; i++){
			if (a % i == 0) return false ;
		}
		return true;
	}
	return false ;
}

int main () {
	int A, B ,dem = 0;
	cin >> A >> B ;
	for (int i = A ; i <= B ; i ++){
		if (NTDX(i)) dem ++ ;
	}
	
	cout << dem;
}
