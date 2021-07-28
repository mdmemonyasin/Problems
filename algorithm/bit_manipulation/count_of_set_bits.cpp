#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = INT_MIN;
    for(int i=0;i<=n-k;i++){
        int sum = 0;
        map<int,int> freq;
        for(int l = i;l<=i+k-1;l++){
            freq[arr[l]]++;
        }
        for(int l = i;l<=i+k-1;l++){
            if(freq[arr[l]]!=-1){
                sum += pow(arr[l], freq[arr[l]]);
                freq[arr[l]] = -1;
            }
        }
        ans = max(ans, sum);
    }
    cout<<ans<<endl;
}