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
    int a ,b ,c,d;
    cin>>a>>b>>c>>d;
    if(a==b && a==c && a==d && b==c && b==d && c==d){
      cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}