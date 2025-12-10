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
    if(n==1){
      cout<<n<<endl;
      return;
    }
    else if(n==2){
      cout<<9<<endl;
      return;
    }
    ll ans=5*(n*n-n-1);
    ll ans2=4*n*n-n-4;
    cout<<max(ans,ans2)<<endl;
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}