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
    int n;
    cin>>n;
    vector<int> v(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
      cin>>v[i];
      mp[v[i]]++;
    }
    int k=mp.size();
    sort(v.begin(),v.end());
    ll ans=0;
    for(int i=0;i<n;i++){
      if(v[i]>=k){
        ans=v[i];
        break;
      }
    }
    cout<<ans<<endl;
    return ;
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}