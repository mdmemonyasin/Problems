#include<bits/stdc++.h>
using namespace std;
// int main(){
//     string s1, s2;
//     cin>>s1>>s2;
//     if(s1.length() != s2.length()){
//         cout<<"Not";
//         return 0;
//     }
//     int freqOfS1[25] = {0}, freqOfS2[25] = {0};
//     for(int i = 0;i<s1.length();i++){
//         freqOfS1[s1[i] - 'a']++;
//         freqOfS2[s2[i] - 'a']++;
//     }
//     for(int i = 0;i<25;i++){
//         if(freqOfS1[i] != freqOfS2[i]){
//             cout<<"No";
//             return 0;
//         }
//     }
//     cout<<"Yes"<<endl;
//     return 0;
// }

int main(){
    string s1, s2;
    cin>>s1>>s2;
    if(s1.length() != s2.length()){
        cout<<"Not Anagram";
        return 0;        
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    for(int i = 0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            cout<<"Not Anagram"<<endl;
            return 0;
        }
    }
    cout<<"Strings are Anagram"<<endl;
    return 0;
}
