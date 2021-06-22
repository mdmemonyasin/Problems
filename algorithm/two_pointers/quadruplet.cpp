#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for(int i=0;i<n;i++){
        // Duplication at the level of a
        if(i>0 && arr[i] == arr[i-1]) continue;
        for(int j = i+1;j<n;j++){
            // Duplication at the level of b
            if(j>i+1 && arr[j] == arr[j-1]) continue;
            int c = j+1, d = n-1;
            int currRem = -1 * (arr[i]+arr[j]);
            while(c<d){
                if(arr[c] + arr[d] > currRem){
                    d--;
                }else if(arr[c] + arr[d] < currRem){
                    c++;
                }else{
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[c]<<" "<<arr[d]<<endl;
                    if(arr[c] == arr[d]) break;
                    int v1 = arr[c], v2 = arr[d];
                    while(arr[c] == v1){
                        c++;
                    }
                    while(arr[d] == v2){
                        d--;
                    }
                }
            }

        }
    }
}