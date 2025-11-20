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
    vector<ll> w(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    for(int i=0;i<n;i++){
      cin>>w[i];
    }
    vector<ll> dp1(n),dp2(n);
    dp1[0]=v[0];
    dp2[0]=w[0];
    for(int i=1;i<n;i++){
      dp1[i]=max(dp1[i-1],dp2[i-1]+v[i]);
      dp2[i]=max(dp2[i-1],dp1[i-1]+w[i]);
    }
    cout<<max(dp1[n-1],dp2[n-1])<<endl;

}

int32_t main() {
    fast_io;
    solve();
    return 0;
}