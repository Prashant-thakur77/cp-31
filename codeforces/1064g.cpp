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
    vector<int> t=v;
    sort(all(t));
    for(int i=0;i<n;i++){
      
      v[i]=lower_bound(t.begin(),t.end(),v[i])-t.begin();
    }
    vector<int> cost(n);
    for(int i=0;i<n;i++){
      cin>>cost[i];
    }
    vector<ll> dp(n,0);
    for(int i=0;i<n;i++){
      ll mn=LLONG_MAX/2;
      for(int j=0;j<n;j++){
        mn=min(mn,dp[j]);
        dp[j]=mn + ((j==v[i])?0:cost[i]);
      }
    }
    cout<<*min_element(dp.begin(),dp.end())<<endl;
    return;



}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}