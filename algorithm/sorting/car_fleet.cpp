#include<bits/stdc++.h>
using namespace std;
int main(){
    int target, n, x;
    cin>>target>>n;
    vector<int> speed, position;
    for(int i=0;i<n;i++){
        cin>>x;
        speed.push_back(x);
    }
    for(int i=0;i<n;i++){
        cin>>x;
        position.push_back(x);
    }
    for(int i=0;i<n;i++){
        position[i] = target - position[i];
    }

    for(int i=1; i<=target;i++){
        for(int j=0;j<speed.size())
    }
}