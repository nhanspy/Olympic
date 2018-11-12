#include <iostream>
#include <string>
using namespace std;

string x, f;

int minn(int i , int j , int k){return i < j ? ( i < k ? i : k ) : j < k ? j : k ; }
int min(int i , int j , int k) {return min(min(i,j),k);}

int L(int i , int j){
	if (i == 0) return j;
	else 
		if (j == 0) return i;
		else
			if ( x[i-1] == f[j-1] ) return L(i - 1, j - 1);
			else return minn(L(i-1,j) + 1 , L(i-1,j-1) + 1 , L(i,j-1) + 1);
}

int main () {
	getline(cin,x);
	getline(cin,f);
	int m = x.length() , n = f.length() ;
	//cout << x <<endl<< f << endl;
	cout << L(n,m);
}
