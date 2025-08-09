#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    sort(all(v));
    vector<ll> b(n);
    for(int i=0;i<n;i++){
      cin>>b[i];
    }
    sort(all(b),greater<int>());
    ll result=1;
    for(int i=0;i<n;i++){
      ll temp=upper_bound(all(v),b[i])-v.begin();
      ll count=n-temp;
      result=result*max(count-i,0LL)%mod;

    }
    cout<<result<<endl;
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}