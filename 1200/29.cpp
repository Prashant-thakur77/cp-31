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
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
      mp[v[i]%m]++;
    }
   
    ll ans=0;
    if(mp.find(0)!=mp.end()){
      ans++;
      //cout<<"yes0"<<endl;
    }
    for(int i=1;i<=m/2;i++){
      if(mp.find(i)==mp.end() && mp.find(m-i)==mp.end())continue;
      if(mp.find(i)!=mp.end() && mp.find(m-i)==mp.end()){
        ans+=mp[i];
        continue;
      }
      if(mp.find(i)==mp.end() && mp.find(m-i)!=mp.end()){
        ans+=mp[m-i];
        continue;
      }

     // cout<<mp[i]<<" "<<mp[m-i]<<endl;
      int maxi=max(mp[i],mp[m-i]);
      int mini=min(mp[i],mp[m-i]);
      if(maxi>mini+1){
        ans+=(maxi-(mini+1));
      }
      ans++;
      
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