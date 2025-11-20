#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll &x : v) cin>>x;
    vector<ll> prefixMin(n);
    prefixMin[0]=v[0];
    for (int i = 1; i < n; i++) {
        prefixMin[i]=min(prefixMin[i-1],v[i]);
    }

    ll suffixMax=LLONG_MIN;
    bool ok=true;

    for (int i = n - 1; i >= 1; i--) {
        suffixMax=max(suffixMax,v[i]);
        if (prefixMin[i-1]>suffixMax) {
            ok=false;
            break;
        }
    }

    cout<<(ok?"Yes\n":"No\n");
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
