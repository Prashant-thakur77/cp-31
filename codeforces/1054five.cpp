#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
ll countlen(ll r,ll left,int x){
  if(x<=0)return 0LL;
  int lb=max(left,r-x+1);
  if(lb>r) return 0LL;
  return (ll)(r-lb+1);

}

ll countmost(vector<ll> v,ll d,ll l,ll r){
  if(d<=0) return 0LL;
  int n=v.size();
  map<ll,int> mp;
  ll left=0;
  int dis=0;
  ll ans=0;
  for(int i=0;i<n;i++){
    if(++mp[v[i]]==1)dis++;
    while(dis>d){
      if(--mp[v[left]]==0)mp.erase(v[left]);
      left++;
    }
    ans+=countlen(i,left,r)-countlen(i,left,l-1);
  }
  return ans;



}

void solve() {
    // Your code here
    ll n,k,l,r;
    cin>>n>>k>>l>>r;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    ll mostk=countmost(v,k,l,r);
    ll mostkneg=countmost(v,k-1,l,r);
    cout<<mostk-mostkneg<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}