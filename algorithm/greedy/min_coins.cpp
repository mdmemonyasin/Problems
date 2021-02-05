#include<bits/stdc++.h>
using namespace std;
int main(){
    int ammount;
    cin>>ammount;
    int coins[] = {10,5,2,1};
    int n = sizeof(coins)/sizeof(coins[0]);
    int result = 0;
    sort(coins,coins+n, greater<int>());
    for(int i = 0; i<n;i++){
        if(coins[i]<=ammount){
            int can_take = floor(ammount/coins[i]);
            result += can_take;
            ammount = ammount - (can_take*coins[i]);
            if(ammount<=0){
                break;
            }
        }
    }
    cout<<result<<" ";
}