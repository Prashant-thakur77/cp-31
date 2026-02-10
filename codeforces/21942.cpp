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
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    vector<ll> w=v;
    ll no=w[0]%x;
    ll ind=0;
    for(int i=0;i<n;i++){
      if((w[i]%x)>no){
        no=w[i]%x;
        ind=i;
      }
    }
    ll total=w[ind];
    for(int i=0;i<n;i++){
      if(i==ind)continue;
      total+=y*(w[i]/x);
    }
    cout<<total<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}