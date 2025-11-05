#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    vector<ll> b(n);
    
   
    for (int i=0;i<n;i++) {
        cin>>a[i];
        a[i]=min(a[i]%k,k-a[i]%k) ; 
    }
    for (int i=0;i<n;i++) {
        cin>>b[i];
        b[i]=min(b[i]%k,k-b[i]%k) ;
      
    }
    sort(all(a));
    sort(all(b));
    if(a==b)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return;

   
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}