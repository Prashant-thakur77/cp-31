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
      sum+=v[i];
    }
    vector<int> w(n-1);
    for(int i=0;i<n-1;i++){
      ll a,b;
      cin>>a>>b;
      b--;
      w[i]=v[b];

    }
    sort(rall(w));
    vector<ll> ans(n-1,0);
    ans[0]=sum;
    for(int i=1;i<n-1;i++){
      ans[i]=ans[i-1]+w[i-1];

    }
    

    for(int i=0;i<n-1;i++){
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