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
    if(n&1){
      int x=1;
     
     for(int i=3;i*i<=n;i=i+2){
      if((n%i)==0){
        x=n/i;
        break;

      }
     }
      
      
      cout<<x<<" "<<n-x<<endl;
      return;

    }
    else{
      cout<<n/2<<" "<<n/2<<endl;
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