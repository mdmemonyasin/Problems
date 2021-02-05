#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 
bool check(ll k, ll n) {
    ll sum = 0;
    ll cur = n;
    while (cur > 0) {
        ll o = min(cur, k);
        sum += o;
        cur -= o;
        cur -= cur / 10;
    }
    return sum * 2 >= n;
}
 
int main() {
    ll n;
    cin >> n;
 
    ll l = 1, r = n;
    ll ans = r;
    while (l <= r) {
        ll k = (l + r) / 2;
        if (check(k, n)) {
            ans = k;
            r = k - 1;
        }
        else{
            l = k + 1;     
        }
    }
        cout << ans << endl;
}