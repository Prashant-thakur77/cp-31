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
    ll k;
    cin>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    bool check=false;
    for(int i=0;i<n;i++){
      if(v[i]%k!=0){
        check=true;
      }
    }
    if(!check){
      cout<<0<<endl;
      return;
    }
    vector<ll> ans;
    for(int i=0;i<n;i++){
      ll no=k-(v[i]%k);
      if(no!=k){
        ans.push_back(no);
      }
    }
    
    sort(all(ans));
  
    map<ll,ll> mp;
    for(int i=0;i<ans.size();i++){
      mp[ans[i]]++;
    }
    ll maxi=INT_MIN;
    ll no;
    for(auto & it:mp){
      if(it.second>=maxi){
        maxi=it.second;
        no=it.first;


      }
    }
    if(maxi==1){
      cout<<ans[ans.size()-1]+1<<endl;
      return;
    }
    cout<<no+(maxi-1)*k+1<<endl;


}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}