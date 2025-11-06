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
    int n;
    cin>>n;
    vector<ll> v(n);
    vector<ll> w(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    for(int i=0;i<n;i++){
      cin>>w[i];
    }
    int no=v[0];
    if(v[0]<w[0]){
      cout<<0<<endl;
      return;
    }
    else{
      int ind=-1;
      for(int i=0;i<n;i++){
        if(w[i]>no){
          ind=i;
          break;
        }

      }
      cout<<ind<<endl;
      return;
    }

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}