#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

ll countmost(vector<ll> &v, ll d, ll l, ll r) {
    if(d < 0) return 0; 
    ll n = v.size();
    map<ll, ll> mp;
    ll left = 0;
    ll dis = 0;
    ll ans = 0;

    for(ll right = 0; right < n; right++) {
        if(++mp[v[right]] == 1) dis++;
        while(dis > d) {
            if(--mp[v[left]] == 0) {
                mp.erase(v[left]);
                dis--;
            }
            left++;
        }

        ll window_len = right - left + 1;
        if(window_len >= l) {
            ll sub_count = min((ll)window_len, r) - l + 1;
            ans += sub_count;
        }
    }

    return ans;
}

void solve() {
    ll n, k, l, r;
    cin >> n >> k >> l >> r;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];

    ll mostk =countmost(v, k, l, r);
    ll mostkneg =countmost(v, k-1, l, r);

    cout<<mostk-mostkneg<<endl;
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
