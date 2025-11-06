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
    
    //cout<<m<<endl;
    for (int i = 1; i <=n; i++) {
     sort(rall(v[i])); 
    }
    vector<vector<long long>> pr(n+1, vector<long long>(1, 0));
    for(int i=1;i<=n;i++){
      for(int it: v[i]){
        pr[i].push_back(pr[i].back()+it);
      }
    }
   
    
    
    vector<ll> ans1(n);
    for(int i=1;i<=n;i++){
      
      for(int j=1;j<=v[i].size();j++){
        ans1[j-1]+=pr[i][v[i].size()/j*j];

      }
      
      
    }
    int k=n-ans1.size();
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