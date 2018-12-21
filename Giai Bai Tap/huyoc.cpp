#include<iostream>
#include<cstring>
#include<fstream>
#include<ctype.h>
#define max 100
using namespace std;
void Docfile(ifstream &infile, char ch[])
{
	infile.open("input2.txt");
	
	while(!infile.eof()) //trong khi chua ket thuc File
	{
		infile.getline(ch,max);
		puts(ch);	
	}
    cout << ch ;
	infile.close();

}
void Ghifile(ofstream &outfile, char ch[],ifstream &infile)
{
	char tenfile[max];
	cout<<"\nNhap tenfile: "<<endl;
	gets(tenfile);
	strcat(tenfile,".txt");
	outfile.open(tenfile);
	if(outfile.fail())
		cout<<"Loi ghi file "<<endl;
	else 
	{
		while(!infile.eof())
		{
			outfile<<gets(ch);
			puts(ch);
		}

	outfile.close();
}
}
main()
{
	ifstream infile;
	ofstream outfile;
	char ch[max];
	int a[max],n;
	Docfile(infile,ch);
//	cout<<endl;
	//Ghifile(outfile,ch,infile);
//	Infile(infile,ch);

}