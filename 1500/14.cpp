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
    vector<ll> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    vector<vector<ll>> adj(n+1);
    for(int i=0;i<n-1;i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    ll val=0;
    vector<ll> vec;
    for(int i=1;i<=n;i++){
        val+=v[i];
        ll size=adj[i].size();
        for(int j=0;j<size-1;j++){
            vec.push_back(v[i]);


        }


    }
    sort(rall(vec));
    cout<<val<<" ";
    for(auto i:vec){
        val+=i;
        cout<<val<<" ";
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