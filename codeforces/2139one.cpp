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
    ll a,b;
    cin>>a>>b;
    if(a>b){
      swap(a,b);
    }
    if(a==b){
      cout<<0<<endl;
    }
    else if(b%a==0){
      cout<<1<<endl;
    }
    else cout<<2<<endl;
    return;


}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}