#include<bits/stdc++.h>
using namespace std;


int main(){
    cout<<"Enter size and then array"<<endl;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the P Q R"<<endl;
    int p, q, r;
    cin>>p>>q>>r;
    int prefixMax[5]={0}, suffixMax[5]={0};
    prefixMax[0] = a[0]*p;
    suffixMax[n-1] = a[n-1]*r;
    for(int i=1;i<n;i++){
        prefixMax[i] = max(prefixMax[i-1], prefixMax[i]*p);
    }
    for(int i=n-2;i>=0;i--){
        suffixMax[i] = max(suffixMax[i+1], suffixMax[i]*r);
    }
    int ans = INT_MIN, x = INT_MIN;
    for(int i=1;i<n-1;i++){
        x = prefixMax[i-1] + (a[i]*q) + suffixMax[i+1];
        ans = max(ans, x);
    }
    cout<<"SUFFIX\n";
    for(int i=0;i<n;i++){
        cout<<suffixMax[i]<<" ";
    }
    cout<<"\nPREFIX\n";
    for(int i=0;i<n-1;i++){
        cout<<prefixMax[i]<<" ";
    }
    cout<<endl;
    cout<<ans<<endl;
}