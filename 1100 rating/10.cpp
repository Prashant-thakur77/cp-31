#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    // Your code here
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    ll y=0;
    for(int i=0;i<3;i++){
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      for(int i=0;i<n;i++){
        if(((x|v[i])!=x))break;
        y=y|v[i];
      }
    }
  
    if(y==x)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}