#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    if(n<2) return 0;
    int minGap[n] = {INT_MAX}, maxGap[n] = {INT_MIN};
    //find min and max;
    int arrMin = INT_MAX;
    int arrMax = INT_MIN;
    for(int i = 0;i<n;i++){
        arrMin = min(arrMin, arr[i]);
        arrMax = max(arrMax, arr[i]);
    }
    if(arrMax == arrMin) return 0;
    //find gap
    int gap = (arrMax-arrMin)/(n-1);
    if((arrMax-arrMin)%(n-1) != 0){
        gap++;
    }
    for(int i = 0;i<n;i++){
        //find bucket number   
        int bucketNum = (arr[i] - arrMin) / gap;
        minGap[bucketNum] = min(minGap[bucketNum], arr[i]);
        maxGap[bucketNum] = max(maxGap[bucketNum], arr[i]); 
    }
    // cout<<"gap:  "<<gap<<endl;
    // for(int i = 0;i<n;i++){
    //     cout<<minGap[i]<<" "<<maxGap[i]<<endl;
    // }
    int ans = INT_MIN;
    int prev = INT_MIN;
    for(int i = 0;i<n;i++){
        if(minGap[i] == INT_MAX) continue;
        if(prev == INT_MIN) prev = maxGap[i];
        else{
            cout<<minGap[i]<<" ";
            ans = max(ans, minGap[i] - prev);
            prev = maxGap[i];
        }
    }
    cout<<ans;
}