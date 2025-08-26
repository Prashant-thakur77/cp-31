#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    if(v[n-2]>v[n-1]){
      cout<<-1<<endl;
      return;
    }
    if(v[n-2]<0 && v[n-1]<0){
      int flag=0;
      for(int i=1;i<n;i++){
        if(v[i-1]>v[i]){
          flag=-1;
          break;
        }

      }
      if(flag==-1){
        cout<<-1<<endl;
        return;
      }
      else cout<<0<<endl;
      return;
    }
    cout<<n-2<<endl;
    for(int i=1;i<=n-2;i++){
      cout<<i<<" "<<n-1<<" "<<n<<endl;
    }
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}