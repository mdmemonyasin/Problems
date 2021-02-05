#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << "0" << endl;
        }
        else
        {
            ll unic = 0, same = 0;
            ll freq[200007] = {0};
            for (ll i = 0; i < n; i++)
            {
                if (freq[a[i]] == 0)
                {
                    freq[a[i]]++;
                    unic++;
                    same = max(freq[a[i]], same);
                }
                else
                {
                    freq[a[i]]++;
                    same = max(freq[a[i]], same);
                }
            }
            if(same = unic-1){
                cout<<same<<endl;
            }else
            {
                ll val1 = min(same, unic-1);
                ll val2 = min(same-1,unic);
                cout<<max(val1,val2)<<endl;
            }
            
        }
    }
    return 0;
}