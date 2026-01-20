#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 10000000074
ll ans=0;
ll dfs(int v,int p,vector<vector<int>>& adj){
  int s=0;
  for(auto j:adj[v]){
    if(j!=p){
      s+=dfs(j,v,adj);
    }

  }
  ans+=s%2;
  return s+1;

}

void solve() {
    // Your code here
    int n;
    cin>>n;
    vector<vector<int>> adj(n+1);
    for(int i=1;i<n;i++){
      ll a,b;
      cin>>a>>b;
      adj[a].push_back(b);
      adj[b].push_back(a);

    }
    if(n%2){
      cout<<-1<<endl;
      return;
    }
    dfs(1,0,adj);
    cout<<ans-1<<endl;

}

int32_t main() {
    fast_io;
    solve();
    return 0;
}