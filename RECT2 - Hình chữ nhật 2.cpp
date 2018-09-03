#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main () {
	int x1 , y1 , x2 , y2 , x3 , y3 ;
	cin>> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;
	int A = (pow((x1 - x2),2)+pow((y1 - y2),2)) ;
	int B = (pow((x2 - x3),2)+pow((y2 - y3),2)) ;
	int C = (pow((x1 - x3),2)+pow((y1 - y3),2)) ;
	float xtb , ytb ;
	if (C == A + B) {
		xtb = (float)(x1 + x3)/2 ;
		ytb = (float)(y1 + y3)/2 ;
		cout << 2*xtb - x2 << " " << 2*ytb - y2 ;
	}else 
		if (A == B + C) {
		xtb = (float)(x1 + x2)/2 ;
		ytb = (float)(y1 + y2)/2 ;
		cout << 2*xtb - x3 << " " << 2*ytb - y3 ;
		} else 
			if (A + C == B) {
			xtb = (float)(x2 + x3)/2 ;
			ytb = (float)(y2 + y3)/2 ;
			cout << 2*xtb - x1 << " " << 2*ytb - y1 ;
			} else cout <<  -1 ;
}
