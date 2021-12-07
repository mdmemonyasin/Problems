#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int psoe[n], nse[n];
    // Calculate next smaller eleent
    stack<int> st;
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() && arr[i] < arr[st.top()])
        {
            nse[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        nse[st.top()] = n;
        st.pop();
    }

    // Calculate previous smaller or equal element
    st.push(n - 1);
    for (int i = n - 2; i >= 0; i--)
    {
        while (!st.empty() && arr[i] <= arr[st.top()])
        {
            psoe[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        psoe[st.top()] = -1;
        st.pop();
    }
    // Core Logic
    int ans = 0, m = 1000000007, v;
    for (int i = 0; i < n; i++)
    {
        v = ((long long)((i - psoe[i]) % m * (nse[i] - i) % m) % m * arr[i] % m) % m;
        ans = (ans % m + v % m) % m;
    }
    cout << ans << endl;
}