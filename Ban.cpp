#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
int main () {
    ifstream fi ("input.txt");
    int n, a[100];
    fi >> n;
    for (int i = 0 ; i < n ; i ++)
        fi >> a[i];
    for (int i = 0 ; i < n - 1 ; i++ )
        for (int j = i + 1 ; j < n ; j ++){
            if (a[i] > a[j]) swap(a[i],a[j]);
        }
    char tmp[100];
    cout << "Nhap ten file : ";
    cin >> tmp;
    ofstream fo (tmp);
    for (int i = 0 ; i < n ; i ++){
        fo << a[i] << " ";
        cout << a[i] << " ";
    }
       
}

// #include <iostream>
// #include <string>
// using namespace std;

// int n, a[100];

// void menu() {
//     cout << "\n======MENU=====\n";
//     cout <<"1. Nhap mang n phn tu\n";
//     cout <<"2. In mang\n";
//     cout <<"3. In ra vi tri si le cuoi cung\n";
//     cout <<"4. In ra so le nho hon x\n";
//     cout <<"0. Thoat!\n";
//     cout <<"Nhap yeu cau: ";
// }

// void nhap(){
//     cout << "Nhap n: ";
//     cin >> n;
//     for (int i = 0 ; i < n ; i ++ ) cin >> a[i];
// }

// void in(){
//     for (int i = 0 ; i < n ; i ++) cout << a[i] << " ";
// }

// void lecuoi() {
//     int dem = 0;
//     for (int i = n - 1 ; i >= 0 ; i --) {
//         if ( a[i] % 2 == 1 ) {
//             cout << i;
//             dem ++;
//             break;
//         }
//     }
//     if (dem == 0) cout << "Khong co so le nao";
// }

// void lex(){
//     int x;
//     cout << "Nhap x: ";
//     cin >> x;
//     int dem = 0;
//     for (int i = 0 ; i < n ; i ++){
//         if ( a[i] % 2 == 1 && a[i] < x ) {
//             cout << a[i] << " ";
//             dem ++;
//         }
//     }
//     if (dem == 0) cout << "Khong co so nao";
// }

// int main () {
//     int chon = 1;
//     while (chon){
//         menu();
//         cin >> chon;
//         switch (chon) {
//             case 1 : nhap();break;
//             case 2 : in();break;
//             case 3 : lecuoi();break;
//             case 4 : lex();break;
//         }
//     }
//     if (chon) cout << "Thoat!!";
// }