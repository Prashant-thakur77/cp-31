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
    
        ll l1,b1,l2,b2,l3,b3;
cin>>l1>>b1>>l2>>b2>>l3>>b3;

if((l1+l2+l3==b1&&b1==b2&&b2==b3)||
   (l2+l3==l1&&b2==b3&&b1+b2==l1)||
   (b1+b2+b3==l1&&l1==l2&&l2==l3)||
   (b2+b3==b1&&l2==l3&&l1+l2==b1))
    cout<<"YES\n";
else
    cout<<"NO\n";

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}