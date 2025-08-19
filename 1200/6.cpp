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
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    if(v.size()==1){
      cout<<1<<endl;
      return;
    }
    vector<ll> ans;
    ans.push_back(v[0]);
    ans.push_back(v[1]);
    for(int i=2;i<n;i++){
      int t=ans.size();
      ll x=ans[t-2]-ans[t-1];
      ll y=ans[t-1]-v[i];
      if(x<0){
        if(y<0)ans[t-1]=v[i];
        else if(y>0)ans.push_back(v[i]);
      }
      else{
        if(y>0)ans[t-1]=v[i];
        else if(y<0)ans.push_back(v[i]);
      }
    }
    int s=ans.size();
    if(ans[0]==ans[1])s--;
    cout<<s<<endl;
   
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}