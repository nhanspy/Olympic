#include<iostream>
#include<string>
using namespace std;
int L[10000][10000];
int min(int a, int b){
    return (a>b) ? b:a;
}
int min(int a, int b,int c){
    return min(min(a,b),c);
}
int Try(int i, int j){
    return min(L[i-1][j] + 1, L[i-1][j-1] + 1, L[i][j-1] + 1);
}
void xuat(int n, int m){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m;j++){
            cout<<L[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    string x,f;
    cin>>x>>f;
    int n = x.length();
    int m = f.length();
    for(int i = 0; i<m; i++) L[0][i] = i+1;
    for(int i = 0;i<n; i++) L[i][0] = i+1;
    xuat(n,m);
    for(int i = 1; i<n; i++){
        for(int j = 1; j<m; j++){
            if(x[i] ==f[j]) L[i][j] = L[i-1][j-1] + 1;
            else L[i][j] = Try(i,j);
        }
    }
    xuat(n,m);
    cout<<L[n-1][m-1];
    return 0;
   }
