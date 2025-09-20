#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007
ll func(ll x){
  return (x*(1LL)*(x+1))/2;
}

void solve() {
    // Your code here
    ll k,x;
    cin>>k>>x;
   
  
   
    
    ll left=0;
    ll right=2*k-1;
    ll ans=2*k-1;
    while(left<=right){
      ll mid=(left+right)/2;
      ll cnt;
      if(mid>=k){
        cnt=func(k)+func(k-1)-func(2*k-1-mid);

      }
      else cnt=func(mid);
      if(cnt>=x){
        ans=mid;
        right=mid-1;
      }
      else left=mid+1;


    }
   cout<<ans<<endl;
    

    

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}