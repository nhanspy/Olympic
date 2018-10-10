#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
long long int m , n , s , f;
long long int a[1000][1000] = {0} , freei[10] , trace[10] ;

void DFS (int u){
	freei[u] = 0;
	for (int v = 1 ; v <= n ; v ++){
		if (a[u][v] == 1 && freei[v] == 1){
			trace[v] = u ;
			DFS(v);
		}
	}
}

int main () {
	long long u , v ,umin = 99999 , vmax = -99999;
	ifstream fi ("test_DFS.inp");
	cin >> n >> m >> s >> f;
	for (int i = 1 ; i <= m ; i ++ ){
		cin >> u >> v;
		a[u][v] = 1;
		a[v][u] = 1;
		if (umin > u) umin = u ;
		if (vmax < v) vmax = v ;
	}
	
	for (int i = umin ; i <= vmax ; i++){
		freei[i] = 1 ;
		trace[i] = -1;
	}	
	DFS(s);
	while (f != s) {
		cout << f <<" ";
		f = trace[f];
	} cout << s ;
}
