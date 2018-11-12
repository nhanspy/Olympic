#include <iostream>
#include <fstream>
#include <map>
using namespace std;
int main () {
    ifstream fi ("file/fi.int");
    map<int,int> a;
    int tmp;
    
    while (!fi.eof()){
        fi >> tmp;
        pair <int ,int> b(tmp,tmp);
        a.insert(b);
    }
    fi.close();
    ofstream fo ("file/fo.out");
    int n = a.size();
    fo << n << endl;
    while (n--){
        map<int,int> :: iterator tmp2 = a.begin() ;
        fo << tmp2->second << " ";
        a.erase(tmp2);
    }
    fo.close();
}