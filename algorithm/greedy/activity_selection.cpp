#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> p1, pair<int, int> p2){
    return p1.second < p2.second;
}

int main(){
    vector<pair<int,int>> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(), v.end(), cmp);
    cout<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }

    int sum = 1;
    int currr_end_time = v[0].second;
    for(int i=1;i<v.size();i++){
        if(v[i].first>=currr_end_time){
            sum++;
            currr_end_time = v[i].second;
        }
    }
    cout<<sum<<" ";
}   