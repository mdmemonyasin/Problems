#include<bits/stdc++.h>
using namespace std;

void sieve(int n){
    bool prime[n+1];
    for(int i=0;i<=n;i++){
        prime[i] = 1;
    }
    prime[1] = 0;
    
    for(int i=2;i*i<=n;i++){
        if(prime[i]!=0){
            for(int j=i*i;j<=n;j=j+i){
                prime[j] = 0;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]){
            cout<<i<<" ";
        }
    }
}


int main(){
    int n;
    cin>>n;
    sieve(n);
}