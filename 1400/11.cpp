#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
bool func(ll mid,vector<ll> &v,vector<ll> mp){
  int n=mp.size();
  for(int i=1;i<n;i++){
    mp[i]-=mid;
    if(mp[i]<=0){
      mp[i]=mp[i]/2;
    }
    //cout<<"mp[i]  "<<mp[i]<<endl;
  }
  ll ans=0;
  for(int i=1;i<n;i++){
    ans+=mp[i];
  }
  //cout<<ans<<endl;
  if(ans<=0)return true;
  else return false;




}

void solve() {
    // Your code here
    ll n,m;
    cin>>n>>m;
    vector<ll> v(m);
    vector<ll> mp(n+1,0);
    for(int i=0;i<m;i++){
      cin>>v[i];
      mp[v[i]]++;
      
    }
    
    
    ll maxi=0;
    for(auto & it:mp){
      maxi=max(maxi,it);
    }
    ll low=1;
    ll high=maxi;
    
    while(low<=high){
      ll mid=(low+high)/2;
      bool ans=func(mid,v,mp);
      //cout<<ans<<"  "<<mid<<endl;
      
      if(ans==true){
        high=mid-1;
      }
      else low=mid+1;
    }
    cout<<low<<endl;
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}