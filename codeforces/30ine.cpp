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
    ll maxi=INT_MIN;
    ll mini=INT_MAX;
    for(int i=0;i<n;i++){
      cin>>v[i];
      maxi=max(maxi,v[i]);
      mini=min(mini,v[i]);
    }
    ll x;
    cin>>x;
    bool check=false;
    if(x>=mini && x<=maxi){
      cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
    return;
    for(int i=0;i<n-1;i++){
      ll no=min(v[i],v[i+1]);
      ll no2=max(v[i],v[i+1]);
      if(x>=no && x<=no2){
        check=true;
        break;
      }
      
    }
    if(check){
      cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;


}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}