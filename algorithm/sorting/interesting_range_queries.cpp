#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x, y, q;
    cin>>n>>q;
    int vec[n] = {0};
    
    while(q--){
        cin>>x>>y;
        vec[y]++;
        if(x!=0){
            vec[x-1]--;
        }
    }
    for(int i=n-2;i>=0;i--){
        vec[i] = vec[i+1] + vec[i];
    }
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}