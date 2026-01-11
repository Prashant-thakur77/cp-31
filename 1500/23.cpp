#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
ll modpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
ll dfs(int i,vector<int>& v,vector<vector<int>>& w){
    v[i]=1;
    ll cnt=1;
    for(auto & it: w[i]){
        if(!v[it]){
            cnt+=dfs(it,v,w);
        }
    }
    return cnt;


}

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    vector<vector<int>> adj(n+1);
    for(int i=1;i<n;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        if(c==0){
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
    }
    vector<int> visited(n+1,0);
    vector<ll> size;
  
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            ll badcnt=dfs(i,visited,adj);
            size.push_back(badcnt);

        }
    }
    ll no=modpow(n,k);
    ll badcnt=0;
    for(int i=0;i<size.size();i++){
        badcnt=(badcnt+(modpow(size[i],k)))%mod;

    }
    cout<<(no-badcnt+mod)%mod<<endl;
    

}

int32_t main() {
    fast_io;
     solve();
    return 0;
}