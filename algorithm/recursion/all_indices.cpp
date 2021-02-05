#include<bits/stdc++.h>
using namespace std;

int all_indices(int a[], int size, int x,int output[]){
    if(size==0) return 0;
    int ans = all_indices(a+1, size-1, x, output);
    if(a[0]==x){
        for(int i=ans-1;i>=0;i--){
            output[i+1] = output[i]+1;
        }
        output[0] = 0;
        ans++;
    }else
    {
        for(int i=ans;i>=0;i--){
            output[i] = output[i] + 1;
        }
    }
    return ans;
}

int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int output[n] = {-1}; 
    int ans = all_indices(a, n,x,output);
    for(int i=0;i<ans;i++){
        cout<<output[i]<<" ";
    }
}