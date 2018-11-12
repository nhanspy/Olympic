#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

int a[10000],ad = 0 , bd = 0;
string b[10000];


int main () {
	string x;
	cin >> x;
	int n = x.length();
	int tmp = 0;
	for (int i = 0 ; i < n ; i++){
		if (x[i] == 42 || x[i] == 43 || i == n-1) {
			string tmp2 = "";
			for (int j = tmp ; j < i ;j++){
				tmp2 += x[j];
			}
			if (i == n-1) tmp2 += x[i];
			else b[bd++] = x[i];
			tmp = i + 1;
			a[ad++] = atoi( tmp2.c_str() );
			
		}
	}
	
	for (int i = 0 ; i < bd ; i++){
		cout << b[i] << " ";
	}
	
}

/*
 * #include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

int a[10000] = {0},ad = 0 ;

int main () {
	string x;
	cin >> x;
	int n = x.length();
	int tmp = 0;
	for (int i = 0 ; i < n ; i++){
		if (x[i] == 42 || x[i] == 43 || i == n-1) {
			string tmp2 = "";
			for (int j = tmp ; j < i ;j++){
				tmp2 += x[j];
			}
			if (i == n-1) tmp2 += x[i];
			tmp = i + 1;
			
			if (x[i] == 43 || i == n-1) a[ad] += atoi( tmp2.c_str() );
			if (x[i] == 42) {
				a[ad++] += atoi( tmp2.c_str() );
			}
		}
	}
	int s = 1;
	for (int i = 0 ; i <= ad ; i++) s *= a[i];
	cout << s;
}
*/
