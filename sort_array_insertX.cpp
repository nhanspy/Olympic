#include <iostream>
#include <algorithm>
using namespace std;

int main (){
	int n;
	cin>> n;
	int A[n], x;
	cout << "Nhap mang \n";
	for (int i = 0 ; i < n ; i ++ ){
		cin>> A[i];
	}
	for (int j = 0; j < n-1 ; j++) {
		for (int i = 0; i < n-1 ; i++) {
			if(A[i] > A[i+1]){
				swap(A[i], A[i + 1]);
			}
		}
	}
	
	
	for (int i = 0 ; i < n ; i++ ){
		cout<< A[i] << " ";
	}
	cout << "Nhap X : " ; cin >> x ;
}


