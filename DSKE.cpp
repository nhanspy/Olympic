#include <bits/stdc++.h>
using namespace std;

	int maxi = INT_MIN , mini = INT_MAX;
	int head[1000] = {0} ,adj[1000] = {0};
	int A[2][1000];
	int n , m;
	int s, f ;
	int trace[1000] = {0};
	
void BFS(){
	queue<int> myQueue;
	myQueue.push(s);
	int tmp;
	while(!myQueue.empty()){
		tmp = myQueue.front();
		myQueue.pop();
		for (int i = head[tmp] + 1; i <= head[tmp+1] ; i++){
			if(trace[ adj[i] ] == 0){
				trace[ adj[i] ] = tmp;
				myQueue.push( adj[i] );
			}
		}
	}
}

void DFS(int s){
	for (int i = head[s] + 1; i <= head[s+1] ; i++){
		if (trace[ adj[i] ] == 0){
			trace[ adj[i] ] = s;
			DFS(adj[i]);
		}
	}
}

void In(){
	cout << f << "\t" ;
	while (s != f){
		f = trace[f];
		cout << f << "\t";
	}
}

void request(int u){
	for(int i = head[u] + 1 ; i <= head[u+1] ; i++){
		cout << adj[i] << "\t";
	}
}

int main () {
	
	//nhap n dinh m canh 
	cin >> n >> m ;
	//nhap danh sach canh
	
	for (int i = 0 ; i < m ; i ++){
		cin >> A[0][i] >> A[1][i] ;
		head[A[0][i]]++;
		head[A[1][i]]++;
		if (A[0][i] > maxi) maxi = A[0][i];
		if (A[1][i] > maxi) maxi = A[1][i];
		if (A[0][i] < mini) mini = A[0][i];
		if (A[1][i] < mini) mini = A[1][i];
	}
	
	for (int i = mini + 1 ; i <= maxi ; i ++){
		head[i] += head[i - 1];
	}
	
	maxi = head[maxi];
	
	for (int i = 0 ; i < m ; i++){
		if ( head[A[0][i]] > 0 ){
			adj[ head[A[0][i]] ] = A[1][i];
			head[A[0][i]] -- ;
		}
		if (head[A[1][i]] > 0) {
			adj[ head[A[1][i]] ] = A[0][i];
			head[A[1][i]] -- ;
		}
	}
	
	cin >> s >> f;
	trace[s] = -1;
	//-----BFS-----
	BFS();
	//-----DFS-----
	//DFS(s);
	In();
}
