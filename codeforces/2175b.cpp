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
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll> b(n+1,0);
    for(int i=1;i<=n;i++){
      if(i==r){
        b[i]=l-1;
        continue;
      }
      b[i]=i;
      
    }
    vector<ll> ans(n+1,0);
    for(int i=1;i<=n;i++){
      ans[i]=b[i]^b[i-1];

    }
    for(int i=1;i<=n;i++){
      cout<<ans[i]<<" ";

    }
    cout<<endl;
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}