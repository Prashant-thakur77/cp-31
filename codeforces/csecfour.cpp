#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

long long  ans(ll k,ll a,ll b,ll x,ll y) {
    ll cnt=0;
    if(k>=a){
        ll no=k-a;
        ll use=no/x+1;
        cnt+=use;
        k-=use*x;
    }
    if(k>=b){
        ll no=k-b;
        ll use =no/y+1;
        cnt+=use;
    }
    return cnt;
}

void solve() {
    ll k,a,b,x,y;
    cin>>k>>a>>b>>x>>y;
    ll no1 =ans(k,a,b,x,y);
    ll no2 =ans(k,b,a,y,x);
    cout<<max(no1,no2)<<endl;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
