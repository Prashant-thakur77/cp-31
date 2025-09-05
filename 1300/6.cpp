#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n;
    cin>>n;
    vector<ll> v(n);
    vector<ll> b(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
     for(int i=0;i<n;i++){
      cin>>b[i];
    }
    vector<pair<ll,ll>> diff(n);
    ll maxi=INT_MIN;
    for(int i=0;i<n;i++){
      diff[i].first=v[i]-b[i];
      diff[i].second=i+1;
      maxi=max(maxi,diff[i].first);
    }
    sort(all(diff));
  
    vector<int> ans;
    for(int i=0;i<n;i++){
      if(diff[i].first==maxi){
        ans.push_back(diff[i].second);
      }
      
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";
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