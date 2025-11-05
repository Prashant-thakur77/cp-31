#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code herll n;
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int cnt1=0;
    for(int i=0;i<n;i++){
      if(s[i]=='1') cnt1++;
    }
    for(int i=n-cnt1;i<n;i++){
      if(s[i]=='1')cnt1--;


    }
    cout<<cnt1<<endl;
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}