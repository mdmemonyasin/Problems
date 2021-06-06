#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second == p2.second){
        return p1.first < p2.first;
    }else if(p1.second == -1 || p2.second == -1){
        return p1.second != -1;
    }
    return p1.second < p2.second;
}

int main(){
    int n, m, x;
    cin>>n>>m;
    vector<int> arr1, arr2;
    for(int i=0;i<n;i++){
        cin>>x;
        arr1.push_back(x);
    }
    for(int i=0;i<m;i++){
        cin>>x;
        arr2.push_back(x);
    }
    int rank[1001];
    for(int i=0;i<1001;i++){
        rank[i] = -1;
    }
    for(int i=0;i<m;i++){
        rank[arr2[i]] = i;
    }
    vector<pair<int, int>> vec;
    for(int i=0;i<n;i++){
        vec.push_back({arr1[i], rank[arr1[i]]});
    }
    sort(vec.begin(), vec.end(), cmp);
    vector<int> ans;
    for(int i=0;i<vec.size();i++){
        ans.push_back(vec[i].first);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}