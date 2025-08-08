#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
ll cardbord(vector<ll> v,ll w,ll c){
  int n=v.size();
  ll ans=0;
  for(int i=0;i<n;i++){
    
    ans+=(v[i]+2*w)*(v[i]+2*w);
    if(ans>c) return ans;
     //cout<<"loop"<<ans<<endl;

  }
  //cout<<"loop"<<ans<<endl;
  return ans;

}

void solve() {
    // Your code here
    ll n,c;
    cin>>n>>c;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    ll low=1;
    ll high=1e9;
    while(low<=high){
      ll mid=(low+high)/2;
      ll ans=cardbord(v,mid,c);
    //  cout<<"ans  "<<mid<<endl;
      if(ans==c){
        cout<<mid<<endl;
        return;
      }

      else if(ans>c)high=mid-1;
      else low=mid+1;
    }
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}