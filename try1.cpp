#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, Q;
    cin>>N>>Q;
    int arr[N];
    map<int, int> map;
    for(int i=0;i<N;i++){
        cin>>arr[i];
        map[arr[i]]++;
    }
    while(Q--){
        int num;
        cin>>num;
        cout<<map[num]<<endl;
    }
}