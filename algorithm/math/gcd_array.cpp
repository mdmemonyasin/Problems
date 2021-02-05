#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int gcd = __gcd(a[0], a[1]);

    for(int i=2;i<n;i++){
        gcd = __gcd(gcd, a[i]);
    }

    cout<<gcd<<endl;

}