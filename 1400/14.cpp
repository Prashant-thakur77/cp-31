#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
ll dist(vector<int> &v){
  int k=v.size();
  sort(rall(v));
  ll ans=0;
  for(int i=0,j=k-1;i<k;i++,j=j-2){
    ans+=(ll)v[i]*j;

  }
  return ans;
}

void solve() {
    // Your code here
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int> (m));
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>v[i][j];
        v[i][j]--;
        
      }
    }
    vector<vector<int>> x(1e5);
    vector<vector<int>> y(1e5);
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        x[v[i][j]].push_back(i);
        y[v[i][j]].push_back(j);
        
      }
    }
    ll ans=0;
    for(int i=0;i<1e5;i++){
      ans+=dist(x[i]);
      ans+=dist(y[i]);
    }
    cout<<ans<<endl;
    return;
}

int32_t main() {
     solve();
    return 9;
}