#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n, x;
//     cin>>n>>x;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     unordered_map<int,int> m;
//     for(int i=0;i<n;i++){
//         m[arr[i]]++;
//     }
//     for(int i=0;i<n;i++){
//         if(m.find(x-arr[i])!=m.end()){
//             if(arr[i] == x-arr[i] && m[arr[i]] > 1){
//                 cout<<"True"<<endl;
//                 return 0;
//             }else if(arr[i] != x-arr[i]){
//                 cout<<"True";
//                 return 0;
//             }
//         }
//     }
//     cout<<"False"<<endl;
// }


int main(){
    int n, x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        if(m.find(x-arr[i])!=m.end()){
            cout<<"True"<<endl;
            return 0;
        }
        m[arr[i]]++;
    }
    cout<<"False"<<endl;
}