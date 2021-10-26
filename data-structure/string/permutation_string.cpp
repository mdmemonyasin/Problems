#include<bits/stdc++.h>
using namespace std;

bool check_window(int freq1[], int freq2[]){

}

int check_permutation(string s1, string s2){
    if(s2.length() < s1.length()){
        return 0;
    }
    int freq2[25] = {0}, freq1[25] = {0};
    for(int i=0;i<s1.size();i++){
        freq2[s2[i] - 'a']++;
        freq1[s1[i] - 'a']++;
    }
    if(check_window(freq1, freq2)) return 1;

    

    return 1;
}

int main(){
    string s1, s2;
    cin>>s1>>s2;
    
    check_permutation(s1, s2);
}