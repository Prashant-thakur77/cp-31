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
    vector<ll> w(n+1);
    for(int i=1;i<=n;i++){
      cin>>v[i];
    }
    vector<ll> ans(n+1,0);
    for(int i=1;i<=n;i++){
      cin>>w[i];
    }
    vector<ll> pref(n+1,0);
    for(int i=1;i<=n;i++){
      pref[i]=pref[i-1]+w[i];
    }
    vector<ll> fre(n+2,0);
    for(int i=1;i<=n;i++){
      ll no=v[i]+pref[i-1];
      ll j=lower_bound(pref.begin()+i,pref.end(),no)-pref.begin();
      if(j<=n){
        ans[j]+=no-pref[j-1];
      }
      fre[i]++;
      fre[j]--;
    }
    for(int i=1;i<=n;i++){
      fre[i]+=fre[i-1];
      ans[i]+=fre[i]*w[i];
    }
    for(int i=1;i<=n;i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;
    return;
    

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}