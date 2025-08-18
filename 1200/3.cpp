#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n,x,y;
    cin>>n>>x>>y;
    long long posno=n/x;
    long long negno=n/y;
    long long count=x*y;
    long long gcd=__gcd(x,y);
    long long lcm=count/gcd;
    long long noout=n/lcm;
    //cout<<lcm<<endl;
    long long k=posno-noout;
    long long t=negno-noout;
    long long totalpos=((n*(n+1))/2)-(((n-k)*(n-k+1))/2);
    //cout<<totalpos<<endl;
    long long totalneg=(t*(t+1))/2;
   // cout<<totalneg<<endl;
    cout<<totalpos-totalneg<<endl;
    

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}