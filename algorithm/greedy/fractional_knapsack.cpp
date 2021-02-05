#include<bits/stdc++.h>
using namespace std;


bool cmp(pair<int,int>p1,pair<int,int> p2){
    return ((double)p1.first/p1.second) > ((double)p2.first/p2.second);
}

int main(){
    vector<pair<int,int>> v;
    int n, w;
    cin>>n>>w;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(), v.end(), cmp);
    cout<<endl;
    for(auto i : v){
        cout<<i.first<<" "<<i.second<<endl;
    }

    int value = 0, weight = 0;
    for(int i=0;i<v.size();i++){
        if(w!=0 &&w >= weight + v[i].second){
            weight = weight + v[i].second;
            value  = value + v[i].first;
        }else
        {
            int rem = w - weight;
            value = value + (rem/v[i].second);
        }
        
    }
    cout<<value<<endl;
    return 0;
}