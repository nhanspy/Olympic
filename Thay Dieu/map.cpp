#include <iostream>
#include <map>
#include <utility>
#include <vector>
using namespace std;
int main() {
	vector<int> myVector ;
	for (int i = 0 ; i <= 9 ; i++){
		myVector.push_back(i);
	}
	vector<int>::iterator position = myVector.begin() ;
	*position = 10 ;
	cout << myVector[0] ;
	
}
