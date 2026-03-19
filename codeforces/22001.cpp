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
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    int flag=0;
    int cnt=1;
    for(int i=1;i<n;i++){
      if(v[i]<v[i-1]){
        flag=1;
        break;
      }
      cnt++;

    }
    if(flag==0){
      cout<<n<<endl;
    }
    else{
      cout<<1<<endl;
    }
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}