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
    ll n, k;
    cin>>n>>k;
    if(n==k){
        cout<<0<<endl;
        return;
    }

    int t=1;
    while(t<=32){
        ll p=1LL<<t;
        ll mini=n/p;
        ll maxi =(n+p-1)/p;
        if(mini<= k && k<= maxi){
            cout<<t<<endl;
            return;
        }
        
        if(maxi<k){
            cout<<-1<<endl;
            return;
        }
        t++;
    }

    cout<<-1<<endl;
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}