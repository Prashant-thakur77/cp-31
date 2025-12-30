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
    vector<ll> v;
    vector<ll> w;
    
    ll no=1;
    for(ll i=1;i<15;i++){
      no=no*i;
      if(no>1e12){
        break;
      }
      v.push_back(no);
    }

    int size=v.size();
    ll ans=LLONG_MAX;
    for(int i=0;i<(1<<size);i++){
      ll sum=0;
      ll cnt=0;
      for(int j=0;j<size;j++){
        if(i&(1<<j)){
          sum+=v[j];
          cnt++;
        }
      }
      if(sum>n)continue;
      ll rem=n-sum;
      cnt+= __builtin_popcountll(rem);
      ans=min(ans,cnt);
    }
    if(ans==LLONG_MAX){
      cout<<-1<<endl;
    }
    else{
      cout<<ans<<endl;
    }
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}