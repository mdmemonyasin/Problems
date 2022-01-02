#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i< n;i++){
        cin>>arr[i];
    }
    int tmp[n];
    for(int i = 0;i<n;i++){
        tmp[(i+k)%n] = arr[i];
    }
    cout<<endl;
    for(int i= 0;i<n;i++){
        cout<<tmp[i]<<" ";
    }
}