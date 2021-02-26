#include<bits/stdc++.h>
using namespace std;
int pathCount = 0;
void paths(vector<vector<int>> v, int i, int j, int m, int n){
    if(i==m-1 && j==n-1){
        pathCount++;
        return;
    }
    if(j==n-1){
        paths(v, i+1, j, m, n);
    }
    else if(i==m-1){
        paths(v, i, j+1,m, n);
    }
    else{
        paths(v, i+1, j, m, n);
        paths(v, i, j+1, m, m);
    }

}

int main(){
    int m,n;
    cin>> m>> n;
    vector<vector<int>> v;
    int a;
    for(int i=0;i<m;i++){
        vector<int> vec;
        for(int j=0;j<n;j++){
          vec.push_back(0);  
        }
        v.push_back(vec);
    }
    paths(v, 0, 0, m, n);
    cout<<pathCount<<endl;   
}