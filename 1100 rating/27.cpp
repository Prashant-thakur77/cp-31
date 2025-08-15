#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    map<int,bool> mp;
    for(int i=0;i<n;i++){
      cin>>v[i];
      mp[v[i]]=true;
    }
    for(int i=0;i<n;i++){
      if(mp.find(v[i]-k)!=mp.end()){
        cout<<"yes"<<endl;
        return;
      }
    }
    cout<<"no"<<endl;
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}