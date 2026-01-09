#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> v(n);
    vector<ll> w(m);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    for(int i=0;i<m;i++){
      cin>>w[i];
    }
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}