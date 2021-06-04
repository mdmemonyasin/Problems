#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sz = 0;
    int size = pow(n, 3);
    int lhsArray[size], rhsArray[size];
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++){
            for(int k = 0;k<n;k++){
                lhsArray[sz++] = (arr[i] * arr[j] ) + arr[k];
            }
        }
    }
    sz = 0;
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++){
            for(int k = 0;k<n;k++){
                if(arr[i]!=0){
                    rhsArray[sz++] = arr[i] * (arr[j] + arr[k]);
                }
                
            }
        }
    }
    sort(rhsArray, rhsArray + size);
    int ans = 0;
    for(int i=0;i<size;i++){
        int* lowerBound = lower_bound(rhsArray,rhsArray+size, lhsArray[i]);
        int* upperBound = upper_bound(rhsArray, rhsArray + size, lhsArray[i]);
        if(*upperBound - *lowerBound + 1 > 0){
            ans += *upperBound - *lowerBound + 1;
        }
    }
    cout<<ans<<endl;

}