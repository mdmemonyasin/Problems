#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    if(s.length()==0) return true;
    int i = 0, j = s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

vector<vector<int>> makePalindrome(vector<string> &words){
    unordered_map<string, int> wordsFreq;
    for(int i = 0;i<words.size();i++){
        wordsFreq.insert({words[i], i});
    }
    map<pair<int, int>, bool> ans;
    vector<vector<int>> res;
    for(int i = 0;i<words.size();i++){
        // For prefix
        for(int j = 0;j<words[i].length();j++){
            string subString = words[i].substr(0, j);
            reverse(subString.begin(), subString.end());
            string remainingString = words[i].substr(j);
            if(wordsFreq.find(subString) != wordsFreq.end() && isPalindrome(remainingString) && wordsFreq[subString] != i){
                if(ans.find({i, wordsFreq[subString]}) == ans.end() || ans[{i, wordsFreq[subString]}] == false){
                    res.push_back({i, wordsFreq[subString]});
                    ans[{i, wordsFreq[subString]}] = true;
                }
            }
        }
        // for suffix
        for(int j = words[i].length()-1;j>=0;j--){
            string subString = words[i].substr(j);
            reverse(subString.begin(), subString.end());
            string remainingString = words[i].substr(0, words[i].length()-subString.length());
            if(wordsFreq.find(subString) != wordsFreq.end() && isPalindrome(remainingString) && wordsFreq[subString] != i){
                if(ans.find({wordsFreq[subString], i}) == ans.end() || ans[{wordsFreq[subString], i}] == false){
                    res.push_back({wordsFreq[subString], i});
                    ans[{wordsFreq[subString], i}] = true;
                }
            }
        }
    }
    return res;
}

int main(){
    int n; string tmp;
    cin>>n;
    vector<string> words;
    for(int i = 0;i<n;i++){
        cin>>tmp;
        words.push_back(tmp);
    }
    vector<vector<int>> res = makePalindrome(words);
    for(auto i: res){
        cout<<i[0]<<" "<<i[1]<<endl;
    }
}