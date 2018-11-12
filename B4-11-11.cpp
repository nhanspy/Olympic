#include <bits/stdc++.h>
#include <map>
#include <fstream>
using namespace std;
int min(int a ,int b){ return a>b ? b : a ;}

int main () {
    map <long,long> a;
    ifstream fi ("/home/nhan/Olympic/file/B24.inp");
    int n ,tmp ;
    fi >> n;

    for (int i = 1 ; i <= n ; i ++ ){
        fi >> tmp;
        pair<int,int> b(tmp,tmp);
        a.insert(b);
    }
    fi.close();
    if (n > a.size()) {
        cout << 0;
        return 0;
    }
    int value = INT_MAX;
    map<long,long>:: iterator d2 = a.begin() ,d1;
    a.erase(d2);
    while (!a.empty()){
        d1 = d2 ;
        d2 = a.begin();
        a.erase(d2);
        int temp = d2->second - d1->second;
        //cout << temp << " ";
        value = min(value,temp);
    }
    cout << value  ;
    
}