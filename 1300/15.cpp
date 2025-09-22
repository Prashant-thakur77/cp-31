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
    vector<pair<int,int>> v;
    
    for(int i=0;i<n;i++){
      ll x;
      cin>>x;
      vector<int> w;
      for(int j=0;j<x;j++){
        ll k;
        cin>>k;
        w.push_back(k-j+1);

        

      }
      sort(w.begin(),w.end());
      v.push_back({w[x-1],x});
    }
    sort(all(v));
    int ans=v[0].first;
    int nomonsterkilledyet=v[0].second;
    for(int i=1;i<n;i++){
      ans=max(ans,v[i].first-nomonsterkilledyet);
      nomonsterkilledyet+=v[i].second;
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