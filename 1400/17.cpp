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
    int n;
    cin>>n;
    vector<ll> u(n);
    vector<ll> s(n);
    for(int i=0;i<n;i++){
      cin>>u[i];
    }
    for(int i=0;i<n;i++){
      cin>>s[i];
    }
    vector<vector<ll>> v(n+1);
   
    for(int i=0;i<n;i++){
      v[u[i]].push_back(s[i]);
      //cout<<u[i]<<"  "<<s[i]<<endl;
      
    }
    int m=v.size();
    //cout<<m<<endl;
    for (int i = 1; i < m; i++) {
     sort(rall(v[i])); 
    }
    
    for(int i=1;i<m;i++){
      int k=v[i].size();

      for(int j=1;j<k;j++){
        v[i][j]=v[i][j-1]+v[i][j];

      }
    }
    
    
    vector<ll> ans1(n,0);
    for(int k=1;k<=n;k++){
      
      for(int j=1;j<=v[k].size();j++){
        int idx = (v[k].size() / j) * j - 1;
if (idx >= 0) ans1[j - 1] += v[k][idx];
        //cout<<k<<" "<<ans<<endl;

      }
     
      
    }
   
    for(int i=0;i<ans1.size();i++){
      cout<<ans1[i]<<" ";
    }
    
    cout<<endl;
    return;



}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}