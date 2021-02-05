#include<bits/stdc++.h>
using namespace std;

int lastIndex(int a[], int n, int x){
    if(n<=0){
        return -1;
    }
    
    int ans = lastIndex(a,n-1,ans);
    if(a[n]==x){
        return n;
    }
    return ans;
}

int main(){
    int a[] = {1,2,3,1};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<lastIndex(a,n,1);
}