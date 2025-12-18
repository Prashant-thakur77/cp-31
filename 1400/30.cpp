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
    ll n,k;
    cin>>n>>k;
    vector<int> fac[n+1];
    for(int i=1;i<=n;i++){
      for(int j=1;j*j<=i;j++){
        if(i%j==0){
          fac[i].push_back(j);
          if(i/j!=j){
            fac[i].push_back(i/j);
          }
        }


      }
    }
    int dp[k+1][n+1];
    for(int i=1;i<=n;i++){
      dp[1][i]=1;
    }
    for(int i=2;i<=k;i++){
      for(int j=1;j<=n;j++){
        dp[i][j]=0;
        for(auto &it:fac[j]){
          dp[i][j]=(dp[i][j]+dp[i-1][it])%mod;
        }
      }
    }
    ll ans=0;
    for(int i=1;i<=n;i++){
      ans=(ans+dp[k][i])%mod;
    }
    cout<<ans<<endl;
    return;
}

int32_t main() {
     solve();
    return 0;
}