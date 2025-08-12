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
    vector<ll> presum(n,0);
    presum[0]=v[0];
    for(int i=1;i<n;i++){
      presum[i]=v[i]+presum[i-1];
    }
    ll gcd=1;
    ll mxi=1;
    for(int i=0;i<n-1;i++){
      ll no=presum[n-1]-presum[i];
      mxi=max(mxi,__gcd(no,presum[i]));
    
     
    }
   
  
    cout<<mxi<<endl;
    return;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}