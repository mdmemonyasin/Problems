#include<bits/stdc++.h>
#include<iostream>
#define mod 1000000007
#define ll long long
using namespace std;

void remove(char str[]){
	if(str[0]=='\0'){
		return;
	}
	if(str[0] == str[1]){
		int i=1;
		for(;str[i]!='\0';i++){
			str[i-1] = str[i];
		}
		str[i-1] = str[i];
		remove(str);
	}else{
		remove(str+1);
	}

}


// Remove consecutive duplicates
int main()
{
	char str[100];
	cin>>str;
	remove(str);
	cout<<str;
	return 0;
}

