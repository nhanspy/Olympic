#include <bits/stdc++.h>
using namespace std;
int main () {
	int a[1000][1000] = {0};
	int n , m ,u,v , max = 0;
	cin >> n >> m;
	for (int i = 1 ; i <= m ; i++){
		cin >> u >> v ;
		a[u][v] = 1;
		a[v][u] = 1;
		if (u > max) max = u;
		if (v > max) max = v;
	}
	for (int i = 1 ; i <= max ; i++){
		for (int j = 1 ; j <= max ;j ++){
			cout << a[i][j] << " ";
		}
		cout <<  endl ;
	}
}
