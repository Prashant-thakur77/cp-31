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
    for(int i=0;i<n;i++){
      cin>>v[i];
      
    }
    vector<ll> b(64);
    for(int i=0;i<n;i++){
      ll bitss=(int)log2((long long)v[i]);
      b[bitss]++;
      
    }


    ll ans=0;
    for(int i=0;i<64;i++){
      if(b[i]>0){
        if(b[i]&1){
          ans+=((b[i]-1)/2)*b[i];
        }
        else  ans+=(b[i]-1)*(b[i]/2);
      }
      

      
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