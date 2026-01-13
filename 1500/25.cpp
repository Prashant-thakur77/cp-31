#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
void dfs(int i,vector<bool>& visited,vector<ll>& ans,vector<vector<int>> adj){
  visited[i]=true;
  ans.push_back(i);
  for(auto & v: adj[i]){
    if(!visited[v]){
      dfs(v,visited,ans,adj);
    }
  }
}

void solve() {
    // Your code here
    ll n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    for(int i=0;i<m;i++){
      ll a,b;
      cin>>a>>b;
      adj[a].push_back(b);
      adj[b].push_back(a);
    }
    priority_queue<int,vector<int>,greater<int>> q;
    vector<ll> v;
    vector<bool> visited(n+1,false);
    q.push(1);
    visited[1]=true;
    while(!q.empty()){
      int no=q.top();
      q.pop();
      v.push_back(no);
      for(auto& it: adj[no]){
        if(!visited[it]){
          q.push(it);
          visited[it]=true;
        }
      }
    }

   for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;
}

int32_t main() {
    fast_io;
     solve();
    return 0;
}