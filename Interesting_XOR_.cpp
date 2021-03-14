#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int c;
        cin>>c;
        int d = 0;
        while(c >= pow(2, d)){
            d++;
        }
        int i = (pow(2, d))-1, j = (pow(2, d))-1, ans = 0;
        bool isFound = false;
        for(; i>=0; i--){
            for(;j>=0; j--){
                if((i^j) == c) {
                    ans = max(ans, i*j);
                    isFound = true;
                }
            }
            if(isFound){
                break;
            }
        }
        cout<<ans<<endl;
    }
}