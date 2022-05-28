#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    unordered_map<int, int> m;
    m[0] = 1;
    int currPrefixSum = 0;
    for(int i = 0;i<n;i++){
        currPrefixSum += arr[i];
        if(m.find(currPrefixSum)!=m.end()){
            cout<<"found at : "<<i<<" ";
            return 0;
        }
        m[currPrefixSum]++;
    }
}