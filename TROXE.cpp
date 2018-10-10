#include <iostream>
#include <map>
#include <string.h>
using namespace std;
int main () {
	map<string , int> myMap ;
	int n ;
	string tmp;
	cin >> n ;
	
	for (int i = 0 ; i < n ; i ++){
		cin >> tmp ;
		myMap[tmp] ++;
	}
	
	int s = 0,p;
	
	while (!myMap.empty()) {
		p = myMap.begin() -> second ;
		s += p <= 5 ? 100 : 100 + (p - 5);
		myMap.erase(myMap.begin());
	}
	
	cout << s ;
}
