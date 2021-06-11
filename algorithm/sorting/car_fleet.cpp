#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<double, double> p1, pair<double, double> p2){
    return p1.first > p2.first;
}

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
    if(position.size() == 0){
        return 0;
    }
    vector<pair<double, double>> vec;
    for(int i = 0;i<position.size();i++){
        vec.push_back({(double)position[i], (double)speed[i]});
    }
    sort(vec.begin(), vec.end(), cmp);
    for(int i = 0;i<vec.size();i++){
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
    int ans = 1, calc = ceil((target - vec[0].first) / vec[0].second);
    for(int i=1;i<vec.size();i++){
        double a = target - vec[i].first;
        double b = vec[i].second;
        double c = ceil(a / b);
        if(c > calc){
            ans++;
            calc = c;
        }
    }
    cout<<ans<<endl;
}