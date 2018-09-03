#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int n,k,d,a[1000000];
	int b[1000000]={0}; 
	int c[1000000]={0};
	ifstream fi("BO1.inp");
	fi>>n>>k;
	for(int i=0;i<n;i++)
		{
			fi>>a[i];
			b[a[i]]++;
			c[-a[i]]++;
		}
	ofstream fo("BO1.out");
	d=0;
	for(int i=0;i<n;i++)
		{
			d=d+(b[a[i]]*b[k-a[i]])+(c[-a[i]]*c[-a[i]+k]);
			b[a[i]]=0;
			b[k-a[i]]=0;
			c[-a[i]]=0;
			c[-a[i]+k]=0;
		}
	fo<<d;
	fo.close();
}
