#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>> v(n);
    
    for(int i=0;i<n;i++){
      cin>>v[i].first;
    }
    for(int i=0;i<n;i++){
      cin>>v[i].second;
    }
    sort(all(v));
    for(int i=0;i<n;i++){
      if(v[i].first>v[i].second)swap(v[i].first,v[i].second);
    }
   
    ll ans=0;
    for(int i=0;i<n;i++){
      ans+=abs(v[i].first-v[i].second);
    }
    for(int i=0;i<n-1;i++){
      if(v[i+1].first<=v[i].second){
        cout<<ans<<endl;
    
        return;
      }
    }
    ll mini=LLONG_MAX;
    for(int i=0;i<n-1;i++){
      mini=min(mini,abs(v[i+1].first-v[i].second));
    }
    
    cout<<ans+2*mini<<endl;
    return;
    

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}