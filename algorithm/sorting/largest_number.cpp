#include<bits/stdc++.h>
using namespace std;

bool cmp(string s1, string s2){
    string o1 = s1 + s2;
    string o2 = s2 + s1;
    if(o1.compare(o2) > 0){
        return true;
    }else{
        return false;
    }
}

string largestNumber(vector<int> &nums){
    vector<string> str;

    for(int i=0;i<nums.size();i++){
        str.push_back(to_string(nums[i]));
    }
    sort(str.begin(), str.end(), cmp);
    string ans = "";
    for(int i=0;i<str.size();i++){
        ans += str[i];
    }
    return ans;
}

int main(){
    int n, x;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }  
    cout<<largestNumber(nums);
}