#include<iostream>
using namespace std;
int UCLN(int x,int y){
	int tmp;
	while(x != 0){
		tmp = y % x;
		y = x;
		x = tmp;
	}
	return y;
}
main()
{
	int a, b;
	cin >> a >> b;
	cout << UCLN(a, b);
}
