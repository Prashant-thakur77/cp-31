#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
bool func(vector<ll> &v,ll k,ll mid){
  bool ans=false;
  int n=v.size();
  for(int i=0;i<n;i++){
    vector<ll> mini(n);
    mini[i]=mid;
    ll c=0;
    for(int j=i;j<n;j++){
      if(mini[j]<=v[j])break;
      if(j+1>=n){
        c=k+1;
        break;

      }
      c+=mini[j]-v[j];
      mini[j+1]=max(0LL,mini[j]-1);
    }
    if(c<=k)ans=true;
  }
  return ans;

}



void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    ll maxi=0;
    for(int i=0;i<n;i++){
      cin>>v[i];
      maxi=max(maxi,v[i]);
    }
    ll low=0;
    ll high=maxi+k;
    ll ans1=0;
    while(low<=high){
      ll mid=(low+high)/2;
      bool ans=func(v,k,mid);
      if(ans){
        ans1=mid;

        low=mid+1;
      }
      else high=mid-1;
    }
    cout<<ans1<<endl;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}