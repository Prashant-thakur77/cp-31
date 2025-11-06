#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
ll fact(ll n){
  ll ans=1;
  for(int i=n;i>0;i--){
    ans=(ans*i)%mod;
  }
  return ans;
}

void solve() {
    // Your code here
    int n;
    cin>>n;
    vector<ll> v(n);
    ll totand=~0;
    
    for(int i=0;i<n;i++){
      cin>>v[i];
      totand=(ll)totand&v[i];
    }
    //cout<<totand<<endl;
    ll cnt=0;
    for(int i=0;i<n;i++){
      if(v[i]==totand){
        cnt++;
      }
    }
    ll ans=((((ll)cnt)*(cnt-1))%mod)*((ll)fact(n-2))%mod;
    cout<<ans<<endl;

    

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}