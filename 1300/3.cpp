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
    vector<ll> v(n+1);
    for(int i=1;i<=n;i++){
      cin>>v[i];
    }
   map<ll,ll> mp;
    long long ans=0;
    mp[0]++;
    bool found=false;
    for(int i=1;i<=n;i++){
      if(i%2==1)ans+=v[i];
      else ans-=v[i];
      mp[ans]++;
      if(mp[ans]==2){
        found=true;
        break;
      }
      
   
    }
    found==true?cout<<"yes"<<endl:cout<<"no"<<endl;
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}