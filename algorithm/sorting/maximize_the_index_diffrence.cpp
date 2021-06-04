#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n, x;
//     cin>>n;
//     vector<int> vec;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         vec.push_back(x);
//     }
//     int ans = INT_MIN;
//     for(int i=0;i<vec.size();i++){
//         for(int j=0;j<vec.size();j++){
//             if(i != j && vec[j] >= vec[i]){
//                 ans = max(ans, j-i);
//             }
//         }
//     }
//     cout<<ans<<endl;
// }

bool cmp(pair<int, int> p1, pair<int,int> p2){
    if(p1.first == p2.first){
        return p1.second < p2.second;
    }
    return p1.first < p2.first;
}

int main(){
    int n,x;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    vector<pair<int, int>> vec;
    for(int i=0;i<arr.size();i++){
        vec.push_back({arr[i], i});
    }
    sort(vec.begin(), vec.end(), cmp);
    
    int currSuffixMax = vec[n-1].second;

    int ans = INT_MIN;

    for(int i=n-2;i>=0;i--){
        ans = max(ans, currSuffixMax - vec[i].second);
        currSuffixMax = max(currSuffixMax, vec[i].second);
    }
    cout<<ans;

}