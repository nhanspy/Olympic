#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int min(int a , int b){return a < b ? a : b;}
int max(int a , int b){return a > b ? a : b;}

int main () {
    string s[10];
    int n , m;
    ifstream fi ("input.txt");
    fi >> m >> n ;
    for (int i = 1 ; i <= m ; i ++){
        fi >> s[i];
        s[i] = " " + s[i];
    }

    int F1[1001][1001] = {0};

    for (int j = 1 ; j <= n ; j ++){
        for (int i = 1 ; i <= m ; i++ ){
            if ( (s[i][j] != '*' && s[i-1][j] != '*') && (s[i][j] != '*' && s[i][j-1]  != '*') )
                F1[i][j] = min (F1[i-1][j] , F1[i][j-1]) + 1; 
            else
                if ( (s[i][j] != '*' && s[i-1][j] != '*') )
                    F1[i][j] = F1[i-1][j] + 1;
                else
                    if ( (s[i][j] != '*' && s[i][j-1]  != '*') )
                        F1[i][j] = F1[i][j - 1] + 1;
        }
    }

    int F2[1001][1001] = {0};

    for (int j = n ; j >= 1 ; j --){
        for (int i = 1 ; i <= m ; i++ ){
            if ( (s[i][j] != '*' && s[i-1][j] != '*') && (s[i][j] != '*' && s[i][j+1]  != '*') )
                F2[i][j] = min (F1[i-1][j] , F1[i][j+1]) + 1; 
            else
                if ( (s[i][j] != '*' && s[i-1][j] != '*') )
                    F2[i][j] = F2[i-1][j] + 1;
                else
                    if ( (s[i][j] != '*' && s[i][j+1]  != '*') )
                        F2[i][j] = F2[i][j+1] + 1;
        }
    }

    int F3[1001][1001] = {0};

    for (int j = n ; j >= 1 ; j --){
        for (int i = m ; i >= 1 ; i-- ){
            if ( (s[i][j] != '*' && s[i+1][j] != '*') && (s[i][j] != '*' && s[i][j+1]  != '*') )
                F3[i][j] = min (F3[i+1][j] , F3[i][j+1]) + 1; 
            else
                if ( (s[i][j] != '*' && s[i+1][j] != '*') )
                    F3[i][j] = F3[i+1][j] + 1;
                else
                    if ( (s[i][j] != '*' && s[i][j+1]  != '*') )
                        F3[i][j] = F3[i][j+1] + 1;
        }
    }

    int F4[1001][1001] = {0};

    for (int j = 1 ; j <= n ; j ++){
        for (int i = m ; i >= 1 ; i-- ){
            if ( (s[i][j] != '*' && s[i-1][j] != '*') && (s[i][j] != '*' && s[i][j+1]  != '*') )
                F3[i][j] = min (F3[i-1][j] , F3[i][j+1]) + 1; 
            else
                if ( (s[i][j] != '*' && s[i-1][j] != '*') )
                    F3[i][j] = F3[i-1][j] + 1;
                else
                    if ( (s[i][j] != '*' && s[i][j+1]  != '*') )
                        F3[i][j] = F3[i][j+1] + 1;
        }
    }


    // int rMax = min(m,n)/2;
    // for (int i = 0 ; i <= rMax ; i ++){
    //     for (int j = i ; i <= n - i ; j ++){
    //         for (int k = i ; k <= m - i ; j ++){
                
    //         }
    //     }
    // }

}