#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int a[1001][6];
float b[2][1001];

float DT(int x){
    int x1 = a[x][0] , y1 = a[x][1] , x2 = a[x][2] , y2 = a[x][3] , x3 = a[x][4] , y3 = a[x][5]  ;
    int s = 0.5 * abs( (x2-x1)*(y3-y1) - (x3-x1)*(y2-y1) );
    return s;
}

float DT2(int x1 , int y1 , int x2 , int y2 , int x3 , int y3){
    int s = 0.5 * abs( (x2-x1)*(y3-y1) - (x3-x1)*(y2-y1) );
    return s;
}

bool kt(int x , int y){
    int x1 = a[x][0] , y1 = a[x][1] , x2 = a[x][2] , y2 = a[x][3] , x3 = a[x][4] , y3 = a[x][5]  ;
    int f0 = DT2(x1,y1,x2,y2,x3,y3)  ;
    int f1 = DT2(x1,y1,x2,y2,a[y][0],a[y][1]) , f2 = DT2(x1,y1,a[y][0],a[y][1],x3,y3) , f3 = DT2(a[y][0],a[y][1],x2,y2,x3,y3);
    if (f0 != f1 + f2 + f3 ) return false;
    f1 = DT2(x1,y1,x2,y2,a[y][2],a[y][3]) , f2 = DT2(x1,y1,a[y][2],a[y][3],x3,y3) , f3 = DT2(a[y][2],a[y][3],x2,y2,x3,y3);
    if (f0 != f1 + f2 + f3 ) return false;
    f1 = DT2(x1,y1,x2,y2,a[y][4],a[y][5]) , f2 = DT2(x1,y1,a[y][4],a[y][5],x3,y3) , f3 = DT2(a[y][4],a[y][5],x2,y2,x3,y3);
    if (f0 != f1 + f2 + f3 ) return false;
    return true;
}

void quicksort(int l , int r){
    int i = l , j = r ;
    int key = b[1][l + rand()%(r - l)];
    while (i <= j){
        while (b[1][i] > key) i++;
        while (key > b[1][j]) j--;
        if (i <= j){
            swap(b[0][i],b[0][j]);
            swap(b[1][i],b[1][j]);
            i++;
            j--;
        }
    }
    if (i < r) quicksort(i,r);
    if (j > l) quicksort(l,j);
}

int main (){
    int n ;
    cin >> n ;
    for (int i = 0 ; i < n ; i ++){
        for (int j = 0 ; j < 6 ; j ++){
            cin >> a[i][j];//mang a[1-6] chua gia tri x , y cua 3 diem
        }
    }
    //mang b0 chua gia thi vi tri , mang b1 chua gia tri dien tich
    for (int i = 0 ; i < n ; i ++){
        b[0][i] = i;
        b[1][i] = DT(i);
    }
    quicksort(0,n-1);//sap xep theo dien tich (b1)

    int c[1001] = {0};
    int vt,vt2,value = -1;
    c[-1] = 0;
    for (int i = 0 ; i < n ; i ++){
        vt = b[0][i];
        for(int j = i + 1 ; j < n ; j ++ ){
            vt2 = b[0][j];
            if ( kt(vt,vt2) ) {
                c[vt] ++;
                if (c[value] < c[vt]) value = vt;
            }
        }
    }

    cout << value ;

    // for (int i = 0 ; i < n ; i ++){
    //     int vt = b[0][i];
    //     cout << b[1][i] << "\t";
    //     for (int j = 0 ; j < 6 ; j ++) cout << a[vt][j] << "\t";
    //     cout << endl;
    // }

}