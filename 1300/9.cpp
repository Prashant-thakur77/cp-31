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
    vector<vector<int>> v;
    map<int,int> mp;
    for(int i=0;i<n;i++){
      ll x;
      cin>>x;
      vector<int> temp(x);
      for(int j=0;j<x;j++){
        cin>>temp[j];
        mp[temp[j]]++;

      }
      v.push_back(temp);
    }
    string ans="no";
    for(int i=0;i<n;i++){
      int f=1;
      for(auto &it: v[i]){
        if(mp[it]==1){
          f=0;
          break;
        }
      }
      if(f==1){
        cout<<"yes"<<endl;
        return;

      }

    }
    cout<<ans<<endl;
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}