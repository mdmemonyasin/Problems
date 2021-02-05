#include<bits/stdc++.h>
#include<iostream>
#define mod 1000000007
#define ll long long
using namespace std;

int length(char str[]){
	if(str[0]=='\0'){
		return 0;
	}
	return 1+length(str+1);
}


int main()
{
	char str[100];
	cin>>str;
	cout<<length(str);
	return 0;
}

