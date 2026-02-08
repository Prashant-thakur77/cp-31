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
    int n,x;
    cin>>n>>x;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    sort(all(v));
    ll cnt1=0;
    reverse(v.begin(),v.end());
    for(int i=0,cnt=1;i<n;i++,cnt++){
      if(v[i]*cnt>=x){
        cnt1++;
        cnt=0;
      }
    }
    cout<<cnt1<<endl;


}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}