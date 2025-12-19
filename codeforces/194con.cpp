#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
const long long INF = 4e18;

void solve() {
    // Your code here
    int n;
    cin >> n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
       cin>>v[i];

    }
    ll ans = 0;
    
    int i = 0;
    while (i<n-1) {
        ll lo = 0,hi = INF,r = 0;
        ll limits[2] = {INF, 0};
        bool odd = true;
        i++;
        while (i < n) {
            ll d=v[i]-v[i-1];
            ll cur=d-r;
            bool nxt=!odd;
            if(nxt){
              lo=max(lo,-cur);
            }
            else{
              hi=min(hi,cur);
            }
            if(lo>=hi) break;
            ll p=limits[nxt];
            if (p<INF && (cur- p) >= (i+1<n?v[i+1]-v[i]:INF)) break;
            ans++;
            r=cur;
            limits[nxt] = min(limits[nxt], cur);
            odd=nxt;
            i++;
        }
    }
    cout<<ans<<endl;
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}