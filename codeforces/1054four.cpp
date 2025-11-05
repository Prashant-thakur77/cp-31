#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define mod 1000000007

ll swaps(const string &s, char c) {
    vector<ll> pos;
    for (ll i = 0; i < s.size(); i++){
       if (s[i] == c) pos.push_back(i);

    }
       
    int k = pos.size();
    if (k <= 1) return 0;
    vector<ll> arr(k);
    for (int i = 0; i < k; i++){
      arr[i] = pos[i] - i;

    } 
    ll med = arr[k / 2];
    ll cost = 0;
    for (int i = 0; i < k; i++){
      cost += llabs(arr[i] - med);

    } 
    return cost;
}

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    
    cout << min(swaps(s,'a'),swaps(s,'b'))<<endl;
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
