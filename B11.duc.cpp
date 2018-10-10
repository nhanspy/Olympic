#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int maxn = 100001;
int n, a[maxn],id[maxn];

int max(int a, int b){ return (a > b) ? a: b;}

//quick sort long
void Qsort(int l, int r){
	int i=l, j=r, ma = a[(l+r) / 2], mId=id[(l+r)/2];
	double tg;
	while (i <= j){
		while ( (a[i] < ma) || (a[i] == ma) && (id[i] < mId) ) i++;
		while ( (a[j] > ma) || (a[j] == ma) && (id[j] > mId) ) j--;
		if (i<=j){
			tg = a[i]; a[i] = a[j]; a[j] = tg;
			tg = id[i]; id[i] = id[j]; id[j] = tg;
			i++; j--;
		}
	}
	if (i < r) Qsort(i,r);
	if (l < j) Qsort(l,j);
}



int find(int x, int vt){
	int l=0, r=n-1, temp=-1,m;
	while (l <= r){
		m = (l+r)/2;
		if (a[m] > x) r=m-1;
		else if (a[m] < x) l=m+1;
		else if (id[m] < id[vt]){
			temp = m; l=m+1;
		}else if (id[m] > id[vt]) r=m-1;
	}
	return temp;
}

int main(){
	
	cin >> n;
	int x;
	for (int i=0; i<n; i++){
		cin >> a[i]; id[i]=i;
	}	 
	
	Qsort(0,n-1);
	
	int res = 1;
	for (int d=1; d <= 100; d++){
		int f[n] = {0};
		for (int i=0; i<n; i++){
			f[i] = max(f[i],1);
			int j = find(a[i]-d,i);
			if (j != -1 ) f[i] = max(f[i], f[j]+1);
			res = max (res, f[i]);
		}
	}
	cout <<res;
	return 0;
}
