#include<bits/stdc++.h>
#include<iostream>
#define mod 1000000007
#define ll long long
using namespace std;

int subs(string input, string output[]){
	if(input.size()== 0){
		output[0] = " ";
		return 1;
	}
	string smallString  = input.substr(1);
	int count = subs(smallString, output);
	for(int i=0;i<count;i++){
		output[count+i] = input[0] + output[i];
	}
	return 2*count;
}


int main()
{
	string input;
	cin>>input;
	string *output = new string[1000];
	int count = subs(input, output);
	for(int i=0;i<count;i++){
		cout<<output[i]<<endl;
	}
	return 0;
}

