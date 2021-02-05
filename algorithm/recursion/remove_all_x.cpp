#include<bits/stdc++.h>
#include<iostream>
#define mod 1000000007
#define ll long long
using namespace std;

void removex(char str[]){
	if(str[0] == '\0') return;
	if(str[0] == 'x'){
		int i=1;
		for(;str[i]!='\0';i++){
			str[i-1] = str[i];
		}
		str[i-1] = str[i];
		removex(str);
	}else
	{
		removex(str+1);
	}
	
}

int main()
{
	char str[100];
	cin>>str;
	removex(str);
	cout<<str;
	return 0;
}

