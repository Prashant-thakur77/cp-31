#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code 
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    ll cnt0=3;
    ll cnt1=1;
    ll cnt5=1;
    ll cnt3=1;
    ll cnt2=2;
    ll ans=0;
    for(int i=0;i<n;i++){
      if(cnt0==0 && cnt1==0 && cnt5==0 && cnt2==0 && cnt3==0){
        ans=i;
        break;

      }
    if(v[i]==0){
      if(cnt0>0)cnt0--;

    }
    if(v[i]==1){
      if(cnt1>0)cnt1--;

    }
    if(v[i]==2){
      if(cnt2>0)cnt2--;

    }
    if(v[i]==5){
      if(cnt5>0)cnt5--;

    }
    if(v[i]==3){
      if(cnt3>0)cnt3--;

    }


    }
    if(cnt0==0 && cnt1==0 && cnt5==0 && cnt2==0 && cnt3==0 && ans==0){
        ans=n;
        

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