#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool isPossible(ll a, ll b, vector<int>& steps){
    if(a==b){
        return true;
    }
    if(a>b){
        return false;
    }
    bool into = isPossible(a*2, b, steps); 
    bool add = isPossible(a*10+1, b, steps);
    if(into){
        steps.push_back(a);
    }
    if(add){
        steps.push_back(a);
    }
    return into || add;
}

int main(){
    ll a, b;
    cin>>a>>b;
    vector<int> steps;
    bool ans = isPossible(a, b, steps); 
    if(ans){
        cout<<"YES"<<endl;
        cout<<steps.size()+1<<endl;
        reverse(steps.begin(), steps.end());
        steps.push_back(b);
        for(int i=0;i<steps.size();i++){
            cout<<steps[i]<<" ";
        }
    }else{
        cout<<"NO";
    }
}