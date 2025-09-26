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
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
      if(i==0|| i==n-1 || v[i]>v[i-1]!=v[i]<v[i+1])
      ans.push_back(v[i]);
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}