#include <bits/stdc++.h>
using namespace std;
int main () {
    ifstream fi ("/home/nhan/Olympic/Giai Bai Tap/input2.txt");
    ofstream fo ("/home/nhan/Olympic/Giai Bai Tap/output2.txt");
    
    while (!fi.eof()){
        string tmp;
        getline(fi,tmp);
        cout << tmp << endl;
        fo << tmp << endl;
    }
    fi.close();
    fo.close();
}