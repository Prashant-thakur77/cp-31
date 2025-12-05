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
    ll n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
      cin>>b[i];
    }
    ll curmin=0;
    ll curmax=0;
    for(int i=0;i<n;i++){
      ll cnd1=curmin-a[i];
      ll cnd2=curmax-a[i];
      ll cnd3=b[i]-curmin;
      ll cnd4=b[i]-curmax;
      ll nextmin=min({cnd1,cnd2,cnd3,cnd4});
      ll nextmax=max({cnd1,cnd2,cnd3,cnd4});
      curmax=nextmax;
      curmin=nextmin;
    }
    cout<<curmax<<endl;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}