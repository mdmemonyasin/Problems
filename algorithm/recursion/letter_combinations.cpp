#include<bits/stdc++.h>
using namespace std;

string convert(int a){
    map<int, string> map;
    map[2] = "abc";
    map[3] = "def";
    map[4] = "ghi";
    map[5] = "jkl";
    map[6] = "mno";
    map[7] = "pqrs";
    map[8] = "tuv";
    map[9] = "wxyz"; 
    return map[a];
}

void generate(string& digitString, string ans, int i){
    // cout<<digitString[i];
    if(digitString[i] == '\0'){
        cout<<ans<<endl;
        return;
    }
    string charString = convert(int(digitString[i] - '0'));
    for(int j=0;j<charString.length();j++){
        if(charString[j] != '\0'){
            generate(digitString, ans+charString[j], i+1);
        }
    }
}

int main(){
    string str;
    cin>>str;
    string ans;
    int i = 0;
    generate(str, ans, i);
}


// Letter Combinations

// void letterCombination(vector<vector<char>>& vec){
//     vec.push_back({'a', 'b', 'c'});
//     vec.push_back({'d', 'e', 'f'});
//     vec.push_back({'g', 'h', 'i'});
//     vec.push_back({'j', 'k', 'l'});
//     vec.push_back({'m', 'n', 'o'});
//     vec.push_back({'p', 'q', 'r', 's'});
//     vec.push_back({'t', 'u', 'v'});
//     vec.push_back({'w', 'x', 'y', 'z'});
// }

// void printAllCombination(string temp, string& digits, int i, vector<vector<char>>& digitsMap){
//     if(digits[i] == '\0'){
//         cout<<temp<<endl;
//         return;
//     }
//     for(int j = 0;j<digitsMap[digits[i] - '2'].size();j++){
//         printAllCombination(temp + digitsMap[digits[i] - '2'][j], digits, i+1, digitsMap);
//     }
// }

// int main(){
//     string digits;
//     cin>>digits;
//     vector<vector<char>> digitsMap;
//     if(digits.length() == 0) return 0;
//     letterCombination(digitsMap);
//     printAllCombination("", digits, 0, digitsMap);
// }