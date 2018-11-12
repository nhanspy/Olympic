/*
cho xâu s . Đếm số xâu con đối xứng khác nhau . có độ dài >= 5 . vd : abxbmax
*/

 #include <iostream>
 #include <string>
 using namespace std;
 int main () {
    string s;
    int dem = 0;
    int L[1000][1000], K[1000][1000] = {0};
    getline(cin,s);
    int n = s.length();
    for (int i = n-1 ; i >= 0 ; i --){
        for (int j = 0 ; j < n ; j ++){
            if (i > j) L[i][j] = 0;
            else 
                if (i == j) L[i][j] = 1;
                else {
                    if (s[i] == s[j]) {
                        L[i][j] = L[i+1][j-1] + 2;
                        K[i][j] = j - i - 1 + K[i+1][j-1];
                        dem += K[i][j];
                    }
                    else {
                        L[i][j] = max(L[i][j-1],L[i+1][j]);
                        K[i][j] = max(K[i][j-1],K[i+1][j]);
                    }   
                }
        }
    }

    cout << dem ;

    cout<< endl;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j ++){
            cout << K[i][j] << "\t";
        }
        cout << endl << endl;
    }
    
}