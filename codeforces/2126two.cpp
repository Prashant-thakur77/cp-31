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
    int k;
    cin>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    vector<int> arr(n,0);
    int ind=0;
    for(int i=0;i<n;i++){
      if(v[i]==0){
        arr[ind]++;

      }
      else ind++;
    }
    ll ans=0;
    for(int i=0;i<n;i++){
      ans+=(arr[i]+1)/(k+1);
      

    }
    cout<<ans<<endl;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}