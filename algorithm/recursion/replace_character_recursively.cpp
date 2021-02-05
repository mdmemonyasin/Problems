#include<bits/stdc++.h>
#include<iostream>
#define mod 1000000007
#define ll long long
using namespace std;

void replace_a_b(char str[], char a, char b){
	if(str[0]=='\0') return;
	if(str[0]==b){
		str[0]=a;
		replace_a_b(str+1, a, b);
	}
	else{
		replace_a_b(str+1, a, b);
	}
}

int main()
{
	char str[100];
	cin>>str;
	char a, b;
	cin>>a>>b;
	replace_a_b(str, a, b);
	cout<<str;
	return 0;
}

