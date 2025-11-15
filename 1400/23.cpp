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
    vector<int> v(n);
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      v[i]=x;
    }
   
    vector<ll> ans(n);
    for(int i=0;i<n;i++){
      ans[i]=i-v[i];
     
    }
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
      mp[ans[i]]+=v[i];

    }
    ll  maxi=0;
    for(auto &it:mp){
      maxi=max(maxi,it.second);
    }
   
  
   
   
    
    cout<<maxi<<endl;

    


}

int32_t main() {
    fast_io;
   
   solve();
    return 0;
}