#include <iostream>
#include <string>
using namespace std;
int main (){
	string a;
	cin >> a ;
	int n = a.length() , dem = 0;
	for (int i = 0 ; i < n ; i ++){
		if (a[i] == 104 && dem == 0) dem ++ ;
		if (a[i] == 101 && dem == 1) dem ++ ;
		if (a[i] == 108 && (dem == 2 || dem == 3)) dem ++ ;
		if (a[i] == 111 && dem == 4) dem ++ ; 
	}
	dem == 5 ? cout << "YES" : cout << "NO" ;
}
