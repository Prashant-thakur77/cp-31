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
    ll n,m,l,r;
    cin>>n>>m>>l>>r;
    ll rem=n-m;
    ll left=abs(l);

    ll use=min(left,rem);
    left-=use;
    rem-=use;

    cout<<-left<<" "<<r-rem<<endl;
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}