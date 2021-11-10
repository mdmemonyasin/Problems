#include<bits/stdc++.h>
using namespace std;

vector<int> findSubStrings(string s, vector<string> &words){
    vector<int> ans;
    if(s.length() ==0 || words.size() ==0 || words.size() * words[0].length() > s.length()){
        return ans;
    }
    unordered_map<string, int> wordsString;
    // Populating my wordString hash
    for(int i = 0;i<words.size();i++){
        wordsString[words[i]]++;
    }
    int n = words.size(), l = words[0].length();
    unordered_map<string, int> tmp;
    for(int i = 0;i<s.length() - n*l;i++){
        for(int j = i;j<i+n*l;j+=l){
            tmp[s.substr(j, l)]++;
        }
        bool flag = true;
        for(int j = 0;j<n;j++){
            if(tmp.find(words[j])==tmp.end() || tmp[words[j]] != wordsString[words[j]]){
                flag = false;
                break;
            }
        }
        if(flag){
            ans.push_back(i);
        }
        tmp.clear();
    }
    return ans;
}

int main(){
    string s;
    vector<string> words;
    int n;
    cout<<"Enter Your String"<<endl;
    cin>>s;
    cout<<"Enter number of words"<<endl;
    cin>>n;
    cout<<"Now enter "<<n<<" words"<<endl;
    for(int i = 0;i<n;i++){
        string temp;
        cin>>temp;
        words.push_back(temp);
    }
    vector<int> ans;
    ans = findSubStrings(s, words);
    for(auto i:ans){
        cout<<i<<" ";
    }
}   