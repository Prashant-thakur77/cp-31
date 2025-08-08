#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    // Your code here
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<pair<ll,ll>> v(n+1);
    v[0]={0,0};
    for(int i=1;i<n+1;i++){
      cin>>v[i].first;
      cin>>v[i].second;
    }
    if(a<=k && b<=k){
      cout<<0<<endl;
      return;
    }
    else if(a>k && b<=k){
      ll x1=v[a].first;
      ll y1=v[a].second;

      ll mini=LLONG_MAX;
      for(int i=1;i<k+1;i++){
        ll x2=v[i].first;
        ll y2=v[i].second;
        ll diff=abs(x2-x1)+abs(y2-y1);
        mini=min(mini,diff);



      }
      cout<<mini<<endl;
      return;

    }
    else if(a<=k && b>k){
      ll x1=v[b].first;
      ll y1=v[b].second;

      ll mini=LLONG_MAX;
      for(int i=1;i<k+1;i++){
        ll x2=v[i].first;
        ll y2=v[i].second;
        ll diff=abs(x2-x1)+abs(y2-y1);
        mini=min(mini,diff);



      }
      cout<<mini<<endl;
      return;

    }
    else{
      ll x11=v[a].first;
      ll y11=v[a].second;

      ll mini1=10e12;
      for(int i=1;i<k+1;i++){
        ll x2=v[i].first;
        ll y2=v[i].second;
        ll diff=abs(x2-x11)+abs(y2-y11);
        mini1=min(mini1,diff);



      }
      ll x12=v[b].first;
      ll y12=v[b].second;

      ll mini2=10e12;
      for(int i=1;i<k+1;i++){
        ll x2=v[i].first;
        ll y2=v[i].second;
        ll diff=abs(x2-x12)+abs(y2-y12);
        mini2=min(mini2,diff);



      }
      ll sum=mini1+mini2;
      //cout<<"sum  "<<sum<<endl;
      //cout<<mini1<<" "<<mini2<<endl;

      ll x1=v[a].first;
      ll y1=v[a].second;
      ll x2=v[b].first;
      ll y2=v[b].second;
      ll ans=abs(x2-x1)+abs(y2-y1);
     // cout<<"ans  "<<ans<<endl;
      ll mini=min(sum,ans);
      cout<<mini<<endl;
      return;
      
    }
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}