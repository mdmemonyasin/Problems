#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int freq[256] = {0};
    freq[s[0]]++;
    int i = 0, j = 0, ans=0;
    while(j<s.size()-1){
        if(freq[s[j+1]]==0){
            freq[s[j+1]]++;
            j++;
        }else{
            freq[s[i]]--;
            i++;
        }
        ans = max(ans, j-i+1);
    }
    cout<<ans<<endl;
}
// Brute Force
    // int freq[256] = {0};
    // int ans = 0;
    // for(int i=0;i<s.size();i++){
    //     int j = 0;
    //     for(int k = 0;k<256;k++){
    //         freq[k] = 0;
    //     }
    //     for(j = i;j<s.size();j++){
    //         if(freq[s[j]] > 0){
    //             // cout<<s[j]<<" "<<freq[s[j]]<<" ";
    //             break;
    //         }else{
    //             freq[s[j]]++;
    //             ans = max(ans, j-i+1);
    //         }
    //     }
    // }
    // cout<<ans<<endl;