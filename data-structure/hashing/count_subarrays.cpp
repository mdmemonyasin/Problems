#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int ps = 0, cnt = 0;
    unordered_map<int, int> m;
    m.insert({ps, 1});
    for(int i = 0;i<n;i++){
        ps += arr[i];
        if(m.find(ps-k) != m.end()){
            cnt += m[ps-k];
        }
        m[ps]++;
    }    
    cout<<cnt;
}