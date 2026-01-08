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
    vector<vector<ll>> li(n+1);
    set<int> st;

    for(int i=0;i<n;i++){
      cin>>v[i];
      
    }
    for(int i=1;i<=n;i++){
      li[i].push_back(-1);

    }
    for(int i=0;i<n;i++){
      li[v[i]].push_back(i);

    }
    for(int i=1;i<=n;i++){
      li[i].push_back(n);

    }
    vector<ll> ans(n+1,-1);
    for(int i=1;i<=n;i++){
      if(li[i].size()<=2)continue;
      ll maxi=0;
      for(int j=0;j<li[i].size()-1;j++){
        maxi=max(li[i][j+1]-li[i][j],maxi);

      }
      for(int k=maxi;k<=n;k++){
        if(ans[k]!=-1)break;
        ans[k]=i;
      }

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