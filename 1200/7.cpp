#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n,m;
    cin>>n>>m;
    
    vector<vector<ll>> v(m,vector<ll> (n,0));
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>v[j][i];
      }
    }
    ll sum=0;

    for(int i=0;i<m;i++){
      sort(all(v[i]));
      

    }
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        sum-=v[i][j]*(n-j-1);
        sum+=v[i][j]*j;
      }
    }
    cout<<sum<<endl;
    return;
    
    

 


    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}