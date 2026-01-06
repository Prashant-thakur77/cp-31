#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
ll sol(vector<ll> v){
  sort(all(v));
  return v[v.size()/2]-v[(v.size()-1)/2]+1;
}

void solve() {
    // Your code here
    ll n;
    cin>>n;
    vector<ll> v(n),w(n);
    for(int i=0;i<n;i++){
      cin>>v[i]>>w[i];
    }
    cout<<sol(v)*sol(w)<<endl;
    return;




}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}