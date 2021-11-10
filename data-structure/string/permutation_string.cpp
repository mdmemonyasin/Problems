#include<bits/stdc++.h>
using namespace std;

bool check_window(int freq1[], int freq2[]){
    for(int i = 0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}

bool check_permutation(string s1, string s2){
    if(s2.length() < s1.length()){
        return false;
    }
    int freq2[26] = {0}, freq1[26] = {0};
    for(int i=0;i<s1.size();i++){
        freq2[s2[i] - 'a']++;
        freq1[s1[i] - 'a']++;
    }
    int i = 0, j = s1.length()-1;
    while (j<s2.length())
    {   cout<<i<<" "<<j<<endl;
        if(check_window(freq1, freq2)) return true;
        freq2[s2[i] - 'a']--;
        i++;
        j++;
        if(j!=s2.length()){
            freq2[s2[j] - 'a']++;
        }
    }
    return false;
}

int main(){
    string s1, s2;
    cin>>s1>>s2;
    cout<<check_permutation(s1, s2)<<endl;
}