// #include <iostream>
// #include <fstream>
// #define mu9 1000000000
// using namespace std;

// int s[2][50] ;
// ifstream fi ("input.txt");
// ofstream fo ("output.txt");

// int max(int a,int b){return a > b ? a : b ;}

// typedef long long ll;
// ll p,q;

// int main () {
//     while (true){
//         cin>>p>>q;
//         if (p==1 && q==1) break;
        
//         //sub1
//         int m,n,x=0,y=1,u=1,v=0;
//         while (1){
//             m=x+u; n=y+v;
//             if (m==p&&n==q) break;
//             if (m*q<n*p){
//                 cout<<"R";
//                 x=m; y=n;
//             } else {
//                 cout<<"L";
//                 u=m; v=n;
//             }
//         }
//         cout<<endl;

//     }
// }

#include<iostream>
#include<fstream>
#include <string>
using namespace std;

long long p,q,x,y,u,v,hx,hy;

int main (){
    while (1){
        cin >> p >> q;
        //string s = "";
        if ( p == 1 && q == 1 ) break;
        x = 0 ; y = 1 ; u = 1 ; v = 0 ; hx = 1 ; hy = 1;
        while (!(hx == p && hy == q)){
            if ( (float) p/q > (float) hx/hy ){
                cout << "R";
                x = hx; y = hy;
                hx += u; hy += v;
            } else{
                cout << "L";
                u = hx; v = hy;
                hx += x; hy += y;
            }
            //cout << x << y << u  << v;
        }
        cout << endl;
    }
}

// #include<iostream>
// #include<fstream>
// using namespace std;

// long long p,q,x,y,u,v,hx,hy;
// ofstream fo ("ps.out");

// int sosanh(){
// 	if (p==hx&&q==hy) return 0;
// 	if (1.0*p/q>1.0*hx/hy) return 1;
// 	return -1;	
// }

// void tinh(){
// 	x=0,y=1,u=1,v=0,hx=1,hy=1;
// 	string s = "";
// 	while (hx!=p&&hy!=q){
// 		if (sosanh()==-1){
// 			s += "L";
// 			hx += x; hy += y;
// 			u = hx - x; v = hy - y;
// 		}
// 		else{
// 			s += "R";
// 			hx += u; hy += v;
// 			x = hx - u; y = hy - v;
// 		}
// 	}
// 	cout<<s<<endl;
// }

// main(){
// 	ifstream fi ("ps.inp");
// 	cin>>p>>q;
// 	while(p!=1&&q!=1){
// 		tinh();
// 		cin>>p>>q;
// 	}
// }
