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
    map<int,int> mp;
    for(int i=0;i<n;i++){
      cin>>v[i];
      mp[v[i]]++;
    }
    ll ans=0;
    for(auto &it :mp){
      ans+=max(0,mp[it.first]-mp[it.first-1]);
    }
    cout<<ans<<endl;
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}