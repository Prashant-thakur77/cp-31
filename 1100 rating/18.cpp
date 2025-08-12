#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    long long n,c;
    cin>>n>>c;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
      v[i]=v[i]+i+1;
    }
    sort(all(v));
    ll sum=0;
    ll cnt=0;
    for(int i=0;i<n;i++){
      sum+=v[i];
      if(sum>c){
        break;
      }
      cnt++;
      
    }
    cout<<cnt<<endl;
    return;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}