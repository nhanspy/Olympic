#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
string a, b;

int max(int a, int b){return a>b?a:b;}

int min(int a, int b){return a>b?b:a;}

int dx(string a , string b){
	int m = a.length() - 1;
	int n = b.length() - 1;
	
	if (m < n){
		string tmp = a;
		a = b ;
		b = tmp ;
		swap(m,n);
	}
	
	//int A[100][100] = {0};
	//int t = max(m,n) , d = min(m,n);
	int dem=0;
	
	for (int i = m ; i >= 0;i--){
		for (int j = n ; j >= 0 ; j--){
			if (b[j] == a[i]) {
				dem++;
				n = j - 1;
				m = i - 1;
				break;
			}
		}
	}
	return dem;
	
}


int main () {
	cin >> a >> b;
	cout << dx(a,b);
}
