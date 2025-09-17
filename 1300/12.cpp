#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    int n,k;
    cin>>n>>k;
    vector<int> ans(31,0);
    for(int i=0;i<n;i++){
      int temp;
      cin>>temp;
      for(int j=30;j>=0;j--){
        if(temp&(1<<j)){
          ++ans[j];
        }
      }
    }
    int ans1=0;
    for(int i=30;i>=0;i--){
      int need=n-ans[i];
      if(need<=k){
        k=k-need;
        ans1 += (1<<i);
      }
    }
    cout<<ans1<<endl;

    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}