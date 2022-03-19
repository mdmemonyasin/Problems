#include<bits/stdc++.h>
using namespace std;
int main(){
    char arr[11];
    for(int i = 0;i<11;i++){
        cin>>arr[i];
    }
    int freq1[26], freq2[26];

    // a -> 0, b -> 1, .... .... z-> 25

    for(int i = 0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true

    for(int i = 0;i<11;i++){
        freq[arr[i] - 'a']++;
    }


}