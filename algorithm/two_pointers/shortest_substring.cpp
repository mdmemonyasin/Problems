#include<bits/stdc++.h>
using namespace std;

string minWindow(string s, string t){
    if(t==""){
        return "";
    }
    vector<int> freqs(256, 0), freqt(256, 0);
    int distinctChar = 0;
    for(int i=0;i<t.size();i++){
        if(freqt[t[i]]==0){
            distinctChar++;
            freqt[t[i]]++;
        }else{
            freqt[t[i]]++;
        }
    }
    // Come up with the first window
    int cnt = 0, i = 0;
    for(i = 0;i<s.size();i++){
        if(cnt == distinctChar){
            break;
        }
        freqs[s[i]]++;
        if(freqs[s[i]] == freqt[s[i]]){
            cnt++;
        }
    }
    if(cnt<distinctChar){
        return "";
    }
    int start = 0, end = i;
    int ansI = start, ansJ = end, len = end-start+1;
    while(end < s.size()){
        while(freqs[s[start]] > freqt[s[start]]){
            start++;
            freqs[s[start]]--;
        }
        if(len > end-start+1){
            ansI = start;
            ansJ = end;
            len = end-start+1;
        }
        end++;
        if(end<s.size()){
            freqs[s[end]]++;
        }
        
    }
    return s.substr(ansI, ansJ);
}

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    cout<<minWindow(s, t);
}