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
    vector<ll> prev_diff(n,-1);
    ll prev=-1;
    for(int i=1;i<n;i++){
      if(v[i]!=v[i-1]) prev=i-1;
      prev_diff[i]=prev;

    }
    int q;
    cin>>q;
    while(q--){
      int l,r;
      cin>>l>>r;
      if(prev_diff[r-1]>=l-1){
        cout<<r<<" "<<prev_diff[r-1]+1<<endl;
      }
      else cout<<-1<<" "<<-1<<endl;
    }
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}