#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int min_diff = INT_MAX;
    for(int i=0;i<n-1;i++){
        min_diff = min(abs(a[i]-a[i+1]), min_diff);
    }
    cout<<min_diff<<" ";
    return 0;
}