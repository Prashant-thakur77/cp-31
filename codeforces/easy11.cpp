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
    ll a,b,c;
    cin>>a>>b>>c;
    ll s=a+b+c;
    if(s%3) cout<<"no"<<endl;
    else{
    if(b<=s/3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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