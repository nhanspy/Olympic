#include <iostream>
using namespace std;
int A[5];
void doiso( int x) {
	int i = 4;
	while ((x != 0) && (i != 0)){
		A[i] = (x % 10);
		x = x / 10 ;
		i-- ;
	}
}

int main () {
	int s = 0;
	for (int i= 0 ; i < 100000 ; i++){
		doiso(i);
		if ((A[0] == A[4]) && A[1] == A[3] ) {
			for (int o = 2 ; o < i ; o++) {
				if ( (i % o) != 0){ s = s + 1;}
			}
			if (s == 0){				
				for (int k = 0 ; k < 5 ; k++  ) {
					cout << A[k];
				}
				cout << " ";
			}
		}
	}
	
	
}
