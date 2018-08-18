// n phan tu mang va k. dem xem co bao nhieu doan lien tuc co tong bang k, n = 10 mu 9 a[i]> 0
#include <iostream>
using namespace std;
int main(){
int A[1000], B[1000], s = 0, n,  a , x = 0 , y = 0, dem = 0;
cin >> n >> a ;
B[0] = 0 ;
for (int i = 0 ; i < n ; i ++ ){
	cin>> A[i];
	s += A[i] ;
	B[i + 1] = s ;
}

while (x <= n  && y <= n){
	if (B[y] - B[x] == a) dem ++;
	(B[y] - B[x] < a)? y++:x++ ;
}

cout << "co " << dem << " day" ;

}
