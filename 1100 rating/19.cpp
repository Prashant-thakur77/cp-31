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
    int cnt=0;
    ll sum=0;
    ll mini=LLONG_MAX;
    for(int i=0;i<n;i++){
      cin>>v[i];
      if(v[i]<0)cnt++;
      ll no=abs(v[i]);
      sum+=no;
      if(no<mini){
        mini=no;
      }

    }
    if(cnt&1){
      cout<<sum-2*mini<<endl;

    }
    else{
      cout<<sum<<endl;
    }
    return;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}