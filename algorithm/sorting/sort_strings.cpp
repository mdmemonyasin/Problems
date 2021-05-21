#include<bits/stdc++.h>
using namespace std; 
// int main(){
//     string s, t;
//     cin >> s >> t;
//     int rank[26] = {INT_MAX};
//     for(int i=0;i<s.length();i++){
//         rank[s[i] - 'a'] = i;
//     }
    
// }
// #include <stdio.h>

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int freq[60] = {0};
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        freq[a[i]]++;
	    }
	    vector<pair<int, int>> vec;
	    for(int i=0;i<n;i++){
	        vec.push_back({a[i], freq[a[i]]});
	    }
	    sort(vec.begin(), vec.end(), cmp);
	    for(int i=0;i<vec.size();i++){
	        cout<<vec[i].first<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}