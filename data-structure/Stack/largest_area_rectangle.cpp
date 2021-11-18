#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<n<<endl;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> nse(3);
    vector<int> pse(3);
    stack<int> st;
    // Code for Next smaller element
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty()&&arr[i] < arr[st.top()]){
            nse[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        nse[st.top()] = n;
        st.pop();
    }
    cout<<1;
    // Code for previous smaller element
    st.push(n-1);
    for(int i = n-2;i>=0;i--){
        while(!st.empty() && arr[i] < arr[st.top()]){
            pse[st.top()] = i;
            st.top();
        }
    }
    while(!st.empty()){
        pse[st.top()] = -1;
        st.top();
    }
    int maxArea = INT_MIN;
    for(int i = 0;i<n;i++){
        maxArea = max(maxArea, arr[i]*(nse[i] - pse[i] - 1));
    }
    cout<<maxArea;
}