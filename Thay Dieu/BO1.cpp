#include<iostream>
using namespace std;
int main()
{
	int n,k,d,S,a[1000000];
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	S=0;d=0;
	for(int i=0;i<n-1;i++)
		{
			S=k-a[i];
			for(int j=i+1;i<n;j++)
				 		if (a[j]==S)
				 				d++;
		}
	cout<<d;
			
	
}
