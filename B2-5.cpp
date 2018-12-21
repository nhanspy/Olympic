
 #include <iostream>
 #include <string>
 #include <map>
 using namespace std;
 int main () {
    string s;
    //int dem = 0, K[1000][1000] = {0};
    int L[1000][1000] , B[1000] = {0};
    getline(cin,s);
    int n = s.length();
    for (int i = n-1 ; i >= 0 ; i --){
        for (int j = i - 1 ; j < n ; j ++){
            if (i > j) L[i][j] = 0;
            else 
                if (i == j) L[i][j] = 1;
                else {
                    if (s[i] == s[j]) {
                        L[i][j] = L[i+1][j-1] + 2;
                        B[L[i][j]] = 1;
                    }
                    else {
                        L[i][j] = max(L[i][j-1],L[i+1][j]);
                    }
                }
        }
    }
    
    int m ,tmp;
    cin >> m;
    while(m--){
        cin >> tmp;
        if (tmp == 1) {
            cout << 1;
            break;
        }
        if(B[tmp] > 0) cout << 1 ;
        else cout << 0;
        cout << endl;
    }
    
}