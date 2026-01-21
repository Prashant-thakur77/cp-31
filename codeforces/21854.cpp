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
    int n,m,h;
    cin>>n>>m>>h;
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    vector<pair<int,int>> vec;
    for(int i=0;i<m;i++){
      ll a,b;
      cin>>a>>b;
      vec.push_back({a,b});
    }
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}