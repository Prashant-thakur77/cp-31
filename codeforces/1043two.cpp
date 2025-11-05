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
    vector<ll> ans;
    ll p=10;
    for(int i=1;i<=18;i++){
      long long d=1LL+p;
      //cout<<d<<endl;
      if(d>n)break;
      if(n%d==0){
        
        ans.push_back(n/d);
      }
      p=p*10;
    }
    if(ans.empty()){
      cout<<0<<endl;
      return;
    }
    else{
      cout<<ans.size()<<endl;
      sort(all(ans));
      for(auto &it: ans){
        cout<<it<<" ";
      }
      cout<<endl;
    }
    return ;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}