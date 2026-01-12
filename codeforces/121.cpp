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
    if(n==7){
      cout<<3<<endl;
      return;
    }
    if(n<=3){
      cout<<n<<endl;
      return;
    }
    if(n%2==0){
      cout<<0<<endl;
    }
    else{
      
        cout<<1<<endl;
      
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