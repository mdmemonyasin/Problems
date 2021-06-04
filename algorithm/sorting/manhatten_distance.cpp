#include<bits/stdc++.h>
using namespace std;

int bruteForce(int x[], int y[], int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j = i+1;j<n;j++){
            ans += abs(x[j] - x[i]) + abs(y[j] - y[i]);
        }
    }
    return ans;
}


int betterApproach(int x[], int y[], int n){
    // sort
    sort(x, x+n);
    sort(y, y+n);
    int totalSumOfX = 0, totalSumOfY = 0;
    for(int i=0;i<n;i++){
        totalSumOfX += x[i];
        totalSumOfY += y[i];
    }
    int xdiff = 0, ydiff = 0;
    for(int i=0;i<n;i++){
        xdiff += (totalSumOfX - x[i]) - (n-1-i) * x[i];
        xdiff += (totalSumOfY - y[i]) - (n-1-i) * y[i];
    }
    return xdiff + ydiff;
}
int main(){
    int n;
    cin>>n;
    int x[n], y[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        cin>>y[i];
    }
    
}

