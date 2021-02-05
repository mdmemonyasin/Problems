#include<bits/stdc++.h>
#include<iostream>
#define mod 1000000007
#define ll long long
using namespace std;

bool check_palindrome(string str, int s, int l){
	if(s>=l){
		return true;
	}
	if(str[s] != str[l]){
		return false;
	}
	
	return check_palindrome(str, s+1, l-1);
	
}

int main()
{
	string s;
	cin>>s;
	cout<<check_palindrome(s, 0, s.size()-1);
	return 0;
}

