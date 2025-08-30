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
    vector<ll> diff;
    for(int i=0;i<n;i++){
      ll x;
      cin>>x;
      diff.push_back(i+1-(x));

    }
    sort(all(diff));
    unordered_map<ll,ll> mp;
    for(int i=0;i<n;i++){
      mp[diff[i]]++;
    }
    ll ans=0;
    for(auto & it:mp){
      ll n=it.second;
      ans+=((double)(n)*(n-1))/2.0;
      
    }
    cout<<ans<<endl;
    return;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}