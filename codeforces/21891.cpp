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
    ll n,h,l;
    cin>>n>>h>>l;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    vector<ll> v1;
    vector<ll> v2;
    ll mini=min(h,l);
    ll maxi=max(h,l);
    for(int i=0;i<n;i++){
      if(v[i]<=mini){
        v1.push_back(v[i]);
      }
      else if(v[i]<=maxi){
        v2.push_back(v[i]);
      }
    }
    cout<<min(v1.size(),(v1.size()+v2.size())/2)<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}