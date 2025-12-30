#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
#define inf (ll)4e18

void solve() {
    // Your code here
     ll n,a,b;
    cin>>n>>a>>b;

    vector<ll> v(n+1), pref(n+1);
    v[0]=0;

    for(int i=1;i<=n;i++) cin>>v[i];

    sort(v.begin()+1,v.end());

    for(int i=1;i<=n;i++)
        pref[i]=pref[i-1]+v[i];

    ll ans=inf;

    for(int i=0;i<=n;i++){
        ll left=(a+b)*(v[i]-v[0]);
        ll right=b*(pref[n]-pref[i]-(n-i)*v[i]);
        ans=min(ans,left+right);
    }

    cout<<ans<<"\n";
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}