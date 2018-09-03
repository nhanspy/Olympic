#include <iostream>
#include <math.h>
using namespace std ;

int min (int a , int b) {
	return a > b ? a : b;
}

int taocay(int L , int R , int Nut , int tree[] , int b[]) {
	int mid ;
	if (L == R) return tree[Nut] = b[L];
	mid = (L + R)/2 ;
	taocay(L,mid,Nut*2,tree,b) ;
	taocay(mid + 1,R,Nut*2+1,tree,b);
	return tree[Nut] = min(tree[Nut*2] , tree[Nut*2+1]);
}

int truyvan (int u , int v , int L , int R , int Nut , int tree[]) {
	int mid ;
	if (u <= L && v >= R) return tree[Nut];
	mid =  (L + R)/2 ;
	if (v <= mid) return truyvan(u,v,L , mid , Nut*2 , tree) ;
	if (u >= mid + 1) return truyvan(u,v,mid + 1 ,R, Nut*2+1 , tree) ;
	return min(truyvan(u,v,L,mid,Nut*2,tree),truyvan(u,v,mid + 1,R,Nut*2+1,tree));
}

int main () {
	int m , n ;
	cin >> n >> m ;
	int a[100007][2] , b[100007] , tree[200007];
	for (int i = 0 ; i < m + n ; i ++) {
		if (i < n ) cin >> b[i] ;
		else 
		cin >> a[i - n ][0] >> a[i - n][1] ;
	}
	taocay(0,n-1,1,tree,b);
	for (int i = 0 ; i < m ; i ++) {
		cout << truyvan(a[i][0]-1,a[i][1]-1,0,n-1,1,tree) << endl;
	}
}
    
