#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin>>n ;

  vector<vector<int>> adj(n + 1);
  for(int i=0;i<n-1;i++) {
    int u,v;
    cin >> u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  vector<int> l(n+1,0);
  vector<int> depth(n+1,0);
  vector<bool> vi(n + 1, false);
  queue<int> q;
  if(q.size()==1){
    cout<<"1"<<endl;
    return;
  }

  q.push(1);
  vi[1]=true;
  l[0] =1;

  int maxi = 0;
  int maxiw = 1;

  while(!q.empty()){
    int u= q.front();
    q.pop();
    int deg= 0;
    for(int v:adj[u]){
      if(!vi[v]){
        vi[v] = true;
        depth[v] =depth[u] + 1;
        l[depth[v]]++;
        q.push(v);
        deg++;
      }
    }
    maxi = max(maxi,deg);
  }

  for(int i=0;i<=n;i++) {
    if (l[i]==0)
      break;
    maxiw=max(maxiw,l[i]);
  }

  cout<<max(maxiw,maxi+1)<<endl;
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}