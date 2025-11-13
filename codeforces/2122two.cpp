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
    ll ans=0;
    for(int i=0;i<n;i++){
      ll a,b,c,d;
      cin>>a>>b>>c>>d;
      if(b>d){
        ans+=a+b-d;
      }
      else if(a>c){
        ans+=a-c;
      }
      

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