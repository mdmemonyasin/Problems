#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int power(long long x, ll y, int p = 1000000007) 
{ 
    int res = 1;     // Initialize result 

    x = x % p; // Update x if it is more than or 
                // equal to p
 
    if (x == 0) return 0; // In case x is divisible by p;

    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 

        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p; 
    } 
    return res;
}
ll calculatePositive(ll d)
{
    ll ans;
    if (d > 10)
    {
        ans = power(3, d - 10);
        ans *= 1024;
    }
    else
    {
        ans = power(2, d);
    }
    return ans;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, d;
        cin >> n >> d;
        ll ans = calculatePositive(d);
        if (ans <= n)
        {
            cout << ans << endl;
        } else{
            cout<<n<<endl;
        }
    }
}