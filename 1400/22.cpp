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
    vector<ll> v(n+1);
    for(int i=1;i<=n;i++){
      cin>>v[i];
    }

    vector<ll> ans(n+1,1);
    ll ans1=1;
    for(int i=1;i<=n;i++){
      for(int j=i*2;j<=n;j+=i){
        if(v[i]<v[j]){
          ans[j]=max(ans[j],ans[i]+1);
          ans1=max(ans1,ans[j]);

        }
      }

    }
    cout<<ans1<<endl;
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}