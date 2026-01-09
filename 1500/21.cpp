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
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> v(n);
    vector<ll> w(m);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    for(int i=0;i<m;i++){
      cin>>w[i];
    }
    vector<ll> a(n+1,0);
    vector<ll> b(m+1,0);
    ll cnt=0;
    for(int i=0;i<n;i++){
      if(v[i]==1){
        cnt++;
        a[cnt]++;
      }
      else cnt=0;
    }
    cnt=0;
    for(int i=0;i<m;i++){
      if(w[i]==1){
        cnt++;
        b[cnt]++;
      }
      else cnt=0;
    }
    for(int i=n-1;i>=0;i--){
      a[i]+=a[i+1];
    }
    for(int i=m-1;i>=0;i--){
      b[i]+=b[i+1];
    }
    ll ans=0;
    for(int i=1;i*i<=k;i++){
      if(k%i==0){
        ll j=k/i;
        if(i<=n && j<=m){
          ans+=a[i]*b[j];
        }
        if(i!=j && j<=n && i<=m){
          ans+=a[j]*b[i];
        }
      }
    }
    cout<<ans<<endl;
}

int32_t main() {
    fast_io;
     solve();
    return 0;
}