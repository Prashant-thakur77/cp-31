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
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    ll ans=0;
    for(int i=1;i<n;i++){
      if(v[i]==0)continue;
      ll k=i;
      while(k<n && v[k]==1)k++;
      ans+=(k-i)/3;
      i=k-1;
    }
    ans+=v[0];
    
    
    cout<<ans<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}