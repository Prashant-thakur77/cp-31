#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];

    }
    vector<vector<ll>> dp(n+1,vector<ll>(n+1,0));
    dp[0][0]=1;
    for(int x: v){
      auto ndp=dp;
      for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
          if(!dp[i][j]) continue;
          if(i<=x){
            ndp[x][j]+=dp[i][j];
            if(ndp[x][j]>=mod)ndp[x][j]-=mod;
          }
          else if(j<=x){
            ndp[i][x]+=dp[i][j];
            if(ndp[i][x]>=mod)ndp[i][x]-=mod;
          }
        }
      }
      dp.swap(ndp);

    }
    ll ans=0;
    for(int i=0;i<=n;i++){
      for(int j=0;j<=n;j++){
        ans+=dp[i][j];
        if(ans>=mod)ans-=mod;
      }
    }
    cout<<ans%mod<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}