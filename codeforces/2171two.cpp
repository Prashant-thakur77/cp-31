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
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    ll ans=0;
    if(ans==1){
      cout<<0<<endl;
      return;
    }
    if(v[0]==-1 && v[n-1]!=-1){
      v[0]=v[n-1];
    }
    if(v[0]!=-1 && v[n-1]==-1){
      v[n-1]=v[0];
    }
    if(v[0]==-1 && v[n-1]==-1){
      v[0]=0;
      v[0]=0;
    }
    for(int i=0;i<n;i++){
      if(v[i]==-1)v[i]=0;
    }
    ll res=abs(v[n-1]-v[0]);
    cout<<res<<endl;
    for(int i=0;i<n;i++){
      cout<<v[i]<<" ";
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