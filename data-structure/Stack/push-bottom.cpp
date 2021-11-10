#include<bits/stdc++.h>
using namespace std;

// Recursive approach
void pushBottom(int x, stack<int> &s){
    if(s.empty()){
        s.push(x);
        return;
    }
    int tp = s.top();
    s.pop();
    pushBottom(x, s);
    s.push(tp);
}


int main(){
    int x, n, t;
    cin>>x>>n;
    stack<int> s;
    for(int i = 0;i<n;i++){
        cin>>t;
        s.push(t);
    }
    pushBottom(x, s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}