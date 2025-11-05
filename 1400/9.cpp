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
    
    int n,m;
    cin>>n>>m;
    vector<int> dp(n+1);
    for(int i = 1 ; i <= n ; ++i){
      dp[i] = n;

    }
            
    for(int i=0;i<m;i++){
      int x, y;
      cin>>x>>y;
      if(x>y){
        swap(x,y);
      }
      dp[x]=min(dp[x],y-1);
    }
    for(int i=n-1;i;i--){
      dp[i]=min(dp[i],dp[i+1]);
    }
    ll ans=n;
    for(int i=0;i<n;i++){
      ans+=(dp[i]-i);

    }
    cout<<ans<<endl;


}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}