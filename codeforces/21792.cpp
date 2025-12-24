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
    vector<int> v(n);
    ll sum=0;
    for(int i=0;i<n;i++){
      cin>>v[i];

    }
    for(int i=0;i<n-1;i++){
      sum+=abs(v[i]-v[i+1]);
      
    }
    ll ans=min(sum-abs(v[1]-v[0]),sum-abs(v[n-1]-v[n-2]));
    for(int i=1;i<n-1;i++){
      ans=min(ans,sum-abs(v[i-1]-v[i])-abs(v[i]-v[i+1])+abs(v[i-1]-v[i+1]));
    }
    cout<<ans<<endl;
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}