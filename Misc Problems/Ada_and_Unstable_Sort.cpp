#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2){
    if(p1.first == p2.first){
        return p1.second > p2.second;
    }
    return p1.first < p2.first;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<pair<int, int>> vec;
    for(int i=0;i<n;i++){
        vec.push_back({a[i], i+1});
    }
    sort(vec.begin(), vec.end(), cmp);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i].second <<" ";
    }
}