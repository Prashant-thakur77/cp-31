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
    vector<ll> ans(n);
    for(int i=0;i<n;i++){
      cin>>ans[i];
    }
    
    vector<ll> v(n/2);
    ll no=0;
    for(int i=0;i<n/2;i++){
      v[i]=abs(ans[i]-ans[n-i-1]);
      no=__gcd(no,v[i]);

    }
    cout<<no<<endl;
    
    
    



}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}