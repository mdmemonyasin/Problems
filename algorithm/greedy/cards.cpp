#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    float sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    float avg = (sum/n)*2;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            for(int j=0;j<n;j++){
                if(a[i]+a[j]==avg && i+1!=j+1){
                    cout<<i+1<<" "<<j+1<<endl;
                    a[i] = 0;
                    a[j] = 0;
                }
            }
        }
    }
}