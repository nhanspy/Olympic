#include <iostream>
#include <algorithm>
using namespace std;
int s[50000] , t[50000];

void sapxep(int n){
	sort(s,s+n);
	sort(t,t+n);
}

//---------------------
int main () {
	int n ;
	cin >> n;
	int j ,dem = 0;
	for (int index = 0 ; index < n ; index ++){
		cin >> s[index] >> t[index] ;
	}
	//Nhap t , s ;
	sapxep(n);//Sap xep s , t .
	
	//for (int i = 0 ; i < n ; i++) cout << s[i] << " " << t[i] << endl;
	//----
	for (int i = 1 ; i < n ; i++){
		j = i - 1 ;
		while (s[i] < t[j]) {
			dem++;
			j--;
			if (j < 0) break;
		}
	}
	cout << dem ;
}
