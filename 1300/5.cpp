#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 998244353
 

void solve() {
    // Your code here
    string s;
    cin>>s;
    int n=s.length();
    ll ans=1;
    int anslen=1;
    int cnt=1;
    for(int i=1;i<n;i++){
      if(s[i]!=s[i-1]){
        anslen++;
        ans=(ans*cnt)%mod;
        cnt=1;
      }
      else cnt++;
      
    }
    ans=(ans*cnt)%mod;
    for(int i=1;i<=n-anslen;i++){
      ans=(ans*i)%mod;

    }
    cout<<n-anslen<<" "<<ans<<endl;
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}