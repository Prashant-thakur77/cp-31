#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n;
    cin>>n;
    vector<ll> v(n);
     map<ll,ll> mp;
    for(int i=0;i<n;i++){
      cin>>v[i];
      mp[v[i]]++;
    }
    ll mini=INT_MAX;
    ll maxi=0;
    ll sum=0;
    int cnt=0;
    for(auto& it:mp){
      
      ll k=it.second;
    
      for(auto& it2:mp){
        if(it2.second>=k){
          sum+=k;
        }


      }
      maxi=max(maxi,sum);
      sum=0;
      
    }
    cout<<maxi<<endl;


}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}