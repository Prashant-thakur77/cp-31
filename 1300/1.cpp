#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n,x,y;
    cin>>n>>x>>y;
    map<ll,vector<ll>> mp;
    for(int i=0;i<n;i++){
      ll g;
      cin>>g;
      mp[g%y].push_back(g);
    }
    ll ans=0;
    for(auto& it:mp){
      vector<ll> v=it.second;
      map<ll,ll> mp1;
      for(int i=0;i<v.size();i++){
        mp1[v[i]%x]++;
      }
      for(auto it:mp1){
        if(it.first==0 || (it.first==x/2 && x%2==0)){
          ll cnt=it.second;
          ans+=(cnt*(cnt-1))/2;
          it.second=0;
        }
        else{
          ll cnt1=it.second;
          ll cnt2=mp1[x-it.first];
          ans+=cnt1*cnt2;
          mp1[x-it.first]=0;
        }
      }
    }
    cout<<ans<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}