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
    vector<ll> a(n);
    vector<ll> b(n);
    ll mini=INT_MAX;
    ll maxi=INT_MIN;
    for(int i=0;i<n;i++){
      cin>>a[i];
      mini=min(mini,a[i]);
      maxi=max(maxi,a[i]);
    }
    for(int i=0;i<n;i++){
      cin>>b[i];
    }
    ll h=0;
    ll sum=0;
    sort(rall(a));
    ll ans=0;
     for( int i=0; i<n;i++)
        {
            while( h<n &&sum+b[h]<=i+1) sum += b[h],h++;
            ans = max(ans, a[i] * 1ll * h);
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