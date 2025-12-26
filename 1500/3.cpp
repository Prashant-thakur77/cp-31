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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    vector<int> dp(n+1);
    dp[n]=0;
    for(int i=n-1;i>=0;i--){
      dp[i]=dp[i+1]+1;
      int j=i+v[i]+1;
      if(j<=n){
        dp[i]=min(dp[i],dp[j]);
      }
    }
    cout<<dp[0]<<endl;
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}