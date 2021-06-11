#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin>>n;
    vector<int> arr;
    vector<int> ans;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    int i = 0, j = 0, c = 0;
    for(;i<n;i++){
        if(arr[i] >= 0){
            break;
        }
    }
    if(i>0){
        j = i-1;
    }

    for(;i<arr.size()&&j>=0;){
        if(arr[i] * arr[i] < arr[j] * arr[j]){
            ans.push_back(arr[i] * arr[i]);
            i++;
        }else{
            ans.push_back(arr[j] * arr[j]);
            j--;
        }
    }
    
    while(i<n){
        ans.push_back(arr[i] * arr[i]);
        i++;
    }
    while(j>-1){
        ans.push_back(arr[j] * arr[j]);
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}