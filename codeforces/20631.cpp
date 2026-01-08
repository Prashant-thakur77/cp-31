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
    vector<vector<int>> v(n+1);
    for(int i=0;i<n-1;i++){
      ll a,b;
      cin>>a>>b;
      v[a].push_back(b);
      v[b].push_back(a);
    }
    vector<bool> visited(n+1,false);
    vector<ll> level(n+1,0);
    vector<ll> depth(n+1,0);
    queue<int> q;
    q.push(1);
    level[0]=1;
    visited[1]=true;
    ll maxlevel=0;
    ll maxwidth=0;
    while(!q.empty()){
      ll u=q.front();
      q.pop();
      ll cntchildren=0;
      for(auto & k:v[u]){
        if(!visited[k]){
          visited[k]=true;
          depth[k]=depth[u]+1;
          level[depth[k]]++;
          q.push(k);
          cntchildren++;
        }
      }
      maxlevel=max(maxlevel,cntchildren);


    }
    for(int i=1;i<=n;i++){
      if(level[i]==0)break;
      maxwidth=max(maxwidth,level[i]);
    }
    cout<<max(maxwidth,maxlevel+1)<<endl;
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}