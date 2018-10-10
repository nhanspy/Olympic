#include <string.h>
#include <iostream>
using namespace std;

string str;

int max(int a , int b){ return a>b?a:b; }

int tdda (int i , int j) {
	while (i <= j){
		if (str[i] == str[j]) {return j - i + 1;}
		j--;
	}
	return 0;
}

int tddb (int i , int j) {
	while (i <= j){
		if (str[i] == str[j]) {return j - i + 1;}
		i++;
	}
	return 0;
}

int tim(int a , int i){
	int j;
	if (i == 0){
		j = 0;
		while(str[a] != str[j]){
			j++;
		}
	} else {
		j = str.length() - 1;
		while (str[j] != str[j]) j--;
	}
	return j;
}

void search(){
	while (i <= j) {
		if (str[i] == str[j]) {
			i++; j--;
			A[i++]++;
			A[j--]++;
		}
	}
}

int main () {
	getline(cin,str);
	int L = str.length();
	int A[L] = {0};
	search();
}
