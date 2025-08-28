#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(all(v));
    vector<ll> diff;
    for(int i=0;i<n-1;i++){
      if(v[i+1]-v[i]>x){
        diff.push_back(v[i+1]-v[i]);
      }
    }
    sort(all(diff));
    ll ans=diff.size()+1;
    for(int i=0;i<diff.size();i++){
      ll val=diff[i]/x +(diff[i]%x!=0) -1;
      if(k>=val){
        ans--;
        k=k-val;
      }
    }
    cout<<ans<<endl;
    return;
}

int32_t main() {
    fast_io;
    solve();
    return 0;
}