#include <iostream>
#include <string>
using namespace std;
int main () {
    string s = "abdf";
    int hash = 0;
    const int base = 31;
    for (int i = 0 ; i < 4 ; i ++){
        hash = (hash * base + s[i] - 'a' + 1 );
        cout << hash << "\t";
    }
    cout << hash;

}