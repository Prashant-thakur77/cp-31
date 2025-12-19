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
    int l,a,b;
    cin>>l>>a>>b;
    ll maxi=0;
    int g=__gcd(b,l);
    /*for(int i=0;i<l;i++){
      maxi=max(maxi,(ll)(a+i*b)%l);

    }*/
    ll max_prize = l-1-((l-1-a)%g);
    cout<<max_prize<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}