#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    k--;
    if((n&1)==0){

      cout<<(k%n) + 1<<endl;
      return;
    }
    int steps=floor(n/2);
    int extra=floor(k/steps);
    int total=k+extra;
    int ans=((total)%n) +1;
    cout<<ans<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}