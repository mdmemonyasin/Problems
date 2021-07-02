#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int arr1[n], arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int i = 0, j = 0;
    while(i<n&&j<m){
        if(arr1[i] < arr2[j]){
            cout<<arr1[i]<<" ";
            int v = arr1[i];
            while(v == arr1[i]){
                i++;
            }
        }else if(arr1[i] > arr2[j]){
            cout<<arr2[j]<<" ";
            int v = arr2[j];
            while(v == arr2[j]){
                j++;
            }
        }else{
            cout<<arr1[i]<<" ";
            int v1 = arr1[i], v2 = arr2[j];
            while(v1 == arr1[i]){
                i++;
            }
            while(v2 == arr2[j]){
                j++;
            }
        }
    }
    while(i<n){
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<m){
        cout<<arr2[j]<<" ";
        j++;
    }
}

// map<int, int> freq;
//     for(int i=0;i<n;i++){
//         freq[arr1[i]]++;
//         if(freq[arr1[i]] == 1){
//             cout<<arr1[i]<<" ";
//         }
//     }
//     for(int i=0;i<m;i++){
//         freq[arr2[i]]++;
//         if(freq[arr2[i]] == 1){
//             cout<<arr2[i]<<" ";
//         }
//     }