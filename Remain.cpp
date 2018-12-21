#include<iostream>
#include<fstream>
#include<algorithm>
#include<cmath>
using namespace std;
int gcd(int A, int B) {
   int tmp;
   while ( A != 0 ){
       tmp = B % A;
       B = A;
       A = tmp;
   }
   return B;
}
int main()
{
	int n;
	cin>>n;
	long long a[101];
	for (int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	while (n>2)
	{
		for (int i=1;i<=n-1;i++)
		{
			if(a[i]!=a[i+1])
				a[i]=abs(a[i+1]-a[i]);
			cout<<a[i]<<" ";
		}
		cout<<endl;
		n--;
	}
	cout<<gcd(a[1],a[2]);
	return 0;
}
