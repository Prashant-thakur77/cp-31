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
    int n;
    cin>>n;
    vector<vector<ll>> v(n);
    for(int i=0;i<n;i++){
      ll a,b;
      cin>>a>>b;
      v[i]={a,b};
    }
    sort(all(v));

}

int32_t main() {
    fast_io;
    solve();
    return 0;
}