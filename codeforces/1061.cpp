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
    ll m=n;
    ll ans=0;
    while(n>2){
      ans+=n/3;
      //cout<<"ans "<<ans<<endl;
      if((n%3)>=1){
        n=n/3;
        n++;

      }
      else n=n/3;
    }
    cout<<(m-1)/2<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}