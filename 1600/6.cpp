#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
int n;
vector<bool> vis;
vector<vector<int>> adj;
void dfs(int i,int & cycles,int& len){
  vis[i]=true;
  len++;
  if(adj[i].size()<2)cycles=false;
  for(auto it:adj[i]){
    if(vis[it])continue;
    dfs(it,cycles,len);
  }

}

void solve() {
    // Your code here
  
    cin>>n;
    vis.assign(n,false);
    adj.assign(n,{});
    for(int i=0;i<n;i++){
      int no;
      cin>>no;
      no--;
      adj[no].push_back(i);
      adj[i].push_back(no);

    }
    ll c=0;
    ll bambo=0;
    for(int i=0;i<n;i++){
      if(vis[i])continue;
      int cycles=1;
      int len=0;
      dfs(i,cycles,len);
      if(cycles && len>2)c++;
      else bambo++;
    }
    if(bambo){
      cout<<c+1<<" "<<c+bambo<<endl;
    }
    else{
      cout<<c<<" "<<c<<endl;
    }
    
    return;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}