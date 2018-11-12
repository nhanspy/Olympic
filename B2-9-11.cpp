#include <iostream>
using namespace std;
int a[1001],b[1001];
int n;
int UCLN(int a, int b){
    int tmp;
    while (a != 0){
        tmp = b % a;
        b = a;
        a = tmp;
    }
    return b;
}

int main (){
    int n,m;
    cin >> n >> m ;

    cin >> a[0];
    int ucln = 0;
    for (int i = 1 ; i < n ; i ++){
        cin >> a[i] ;
        ucln = UCLN(ucln,a[i]);
    }

    cout << ucln ;

    for (int i = 0 ; i < m ; i ++){
        cin >> b[i];
        if ( b[i] % ucln == 0 && ucln != 1) cout << "YES" ;
        else cout << "NO";
        cout << endl;
    }
}