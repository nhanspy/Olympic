#include <iostream>
using namespace std;
int main () {
	int A[100010],B[100010] = {0}, K , n , t=0;
	cin >> n >> K ;
	for (int i = 0 ; i < n ; i++){
		cin >> A[i];
		if (B[A[i] % K] == 0){ 
			B[A[i] % K] ++ ;
			t++ ;
		}
	}
	cout << t ;
}
