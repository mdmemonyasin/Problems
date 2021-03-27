#include<bits/stdc++.h>
using namespace std;

int returnExponentiation(int n, int k){
    if(k==0){
        return 1;
    }
    int ans = returnExponentiation(n ,k/2);
    if(k%2!=0){
        return ans*ans*n;
    }else{
        return ans*ans;
    }
}

int main(){
   int n, k;
   cin>>n>>k;
   cout<<returnExponentiation(n, k);
}