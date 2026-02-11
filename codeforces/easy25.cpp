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
    int n; 
    cin >> n;
    string s; 
    cin >> s;
    int ans = 0;
    for(auto x:s){
        if(x=='0')ans++;
        else ans+=n-1;
    }
    cout<<ans<<'\n';
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}