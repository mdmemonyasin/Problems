#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    // bool state[n+1];

    // for(int i=0;i<=n;i++){
    //     state[i] = 0;
    // }

    // for(int i=1;i<=n;i++){
    //     for (int j=i;j<=n;j++){
    //         if(j%i==0){
    //             state[j] = !state[j];
    //         }
    //     }
    // }
    // int ans = 0;
    // for(int i=1;i<=n;i++){
    //     if(state[i]){
    //         ans++;    
    //     }
    //     // cout<<state[i]<<" ";
    // }
    int ans = sqrt(n);
    cout << ans;

}