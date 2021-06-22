#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    if(s.find(0) == s.end()){
        cout<<"NOT FOUND";
    }
    // auto pos = s.find(0);
    // cout<<*pos;
}