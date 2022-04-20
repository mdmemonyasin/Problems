#include<bits/stdc++.h>
using namespace std;
// Prime Factorization

void sieve(int *prime, int *spf, int n){
    memset(prime, 1, n+1);
    memset(spf, n+1, -1);
    prime[0] = prime[1] = 0;
    for(int i = 2;i*i<=n;i++){
        if(prime[i] == 1){
            for(int j = i*i;j<=n;j+=i){
                if(prime[j]==1){
                    prime[j] = 0;
                    spf[j] = i;
                }
            }
        }
    }
}


int main(){
    int n;
    cin>>n;
    int num = n;
    for(int i = 2;i*i<=num;i++){
        while(n%i==0){
            cout<<i<<" ";
            n = n/i;
        }
    }
    if(n != 1){
        cout<<n;
    }
}