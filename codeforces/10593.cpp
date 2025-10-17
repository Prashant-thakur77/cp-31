#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    ll a, b;
    cin >> a >> b;
    
    if (a == b) {
        cout << 0 << endl;
        return;
    }
    
    int msb_a = 63 - __builtin_clzll(a);
    int msb_b = 63 - __builtin_clzll(b);
    
    if (msb_b > msb_a) {
        cout << -1 << endl;
        return;
    }
    
    ll x = a ^ b;
    if (x <= a) {
        cout << 1 << endl;
        cout << x << endl;
        return;
    }
    
    ll intermediate = a | b;
    ll x1 = a ^ intermediate;
    ll x2 = intermediate ^ b;
    
    if (x1 <= a) {
        cout << 2 << endl;
        cout << x1 << " " << x2 << endl;
    } else {
        cout << -1 << endl;
    }
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}