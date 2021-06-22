#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, b, ans = 0;
    cin>>n>>b;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i = 0, j = n-1;
    while(i<=j){
        if(arr[i] * arr[j] >= b){
            j--;
        }else{
            int l = j-1+1;
            ans += (2 * l) - 1;
            i++;
        }
    }
    cout<<ans<<endl;
}