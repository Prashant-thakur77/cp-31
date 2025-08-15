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
    int no=v[n-1];
    int cnt=0;
    int cnt2=1;
    for(int i=n-2;i>=0;){
      if(v[i]==no){
        cnt2++;
        i--;
      }
      else if(v[i]!=no){
        i=i-cnt2;
        cnt2+=cnt2;
        cnt++;

      }
    }
    cout<<cnt<<endl;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}