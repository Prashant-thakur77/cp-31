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
    vector<pair<ll,ll>> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i].first;
      v[i].second=i+1;

    }
    sort(all(v));
    ll ans=0;
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(v[i].first*v[j].first>=2*n)break;
        if(v[i].first*v[j].first==v[i].second+v[j].second)ans++;
      }
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