#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(int arr[], int n){
    stack<int> s;
    vector<int> ans(n);
    s.push(0);
    for(int i = 1;i<n;i++){
        while(!s.empty()&&arr[i]>arr[s.top()]){
            ans[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        ans[s.top()] = -1;
        s.pop();
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans = nextGreaterElement(arr, n);
    for(auto i: ans){
        cout<<i<<" ";
    }
}