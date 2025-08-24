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
    vector<ll> v(n);
    vector<ll> weight(n,0);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    ll b=accumulate(all(v),0LL)-(n-1);
    ll cnt=0;
    if(n%2==0){
      cnt++;
      if(cnt==2){
        cout<<"hello"<<endl;
      }

    }
    for(int i=0;i<n;i++){
      weight[i]=max(0LL,min<ll>(i,v[i])-2);

    }
    vector<ll> dp(n,0);
    dp[0]=0;
    for(int i=1;i<n;i++){
      dp[i]=dp[i-1];
      if(i>=2){
        dp[i]=max(dp[i],dp[i-2]+weight[i]);
        
      }
      else{
        dp[i]=max(dp[i],weight[i]);
      }
    }
    cout<<b-dp[n-1]<<endl;
    return;
  }

    

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}