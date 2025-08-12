#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    
    vector<vector<ll>> v(n,vector<ll> (n));
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>v[i][j];
      }
    }
    int cnt=0;
    for(int i=0;i<n/2;i++){
      for(int j=0;j<n;j++){
        if(v[i][j]!=v[n-i-1][n-j-1]){
          cnt=cnt+1;
        }
        
      }

    }
    if(cnt>k){
      //cout<<cnt<<endl;
      cout<<"No"<<endl;
      return;
    }
    if(n%2!=0){
      vector<long long> f=v[n/2];
      for(int i=0;i<n/2;i++){
        //cout<<f[i]<<" "<<f[n-i-1]<<endl;
        if(f[i]!=f[n-i-1]){
          cnt++;
        }
      }
      if(cnt<=k){
        cout<<"yes"<<endl;
      }
      else{
        cout<<"no"<<endl;
      }
      return;
    }

    else{
      ll no=k-cnt;
      if(n==1){
        cout<<"yes"<<endl;
        return;

      }
      
      if(no&1){
       //cout<<cnt<<endl;
        cout<<"No"<<endl;
      }
      
      else {
       // cout<<cnt<<endl;
        cout<<"yes"<<endl;
        
      }
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