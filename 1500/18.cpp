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
    vector<ll> v(n);
    ll lastno=-1;
    ll lastind=0;
    ll check=0;
    for(int i=0;i<n;i++){
      cin>>v[i];
     

    }
    ll maxi=0;
    for(int i=1;i<n;i++){
      if(v[i-1]>v[i]){
        maxi=max(maxi,v[i-1]-v[i]);
        v[i]=v[i-1];
      }
      
    }
    ll ans=0;
    if(maxi>0){
      ans=log2(maxi)+1;
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