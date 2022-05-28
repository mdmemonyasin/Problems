#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int, int> m;
    ll minm = INT_MAX;
    for(int i = 0;i<n;i++){
        m.insert({arr[i], 1});
        minm = min(minm, arr[i]);
    }
    for(int i = minm;i<minm+n;i++){
        if(m.find(i)==m.end()){
            cout<<"False";
            return 0;
        }
    }
    cout<<"True";
    return 0;
}