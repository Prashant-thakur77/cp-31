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
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
   
    int size=n;
    int ans=0;

    for(int k=n;k>=1;k--){
      int first=-1;
      int cnt=0;
      for(int i=0;i<size;i++){
        if(v[i]==k && first==-1){
          first=i;
          cnt++;
        }
        else if(v[i]==k)cnt++;


      }
      if(first==-1){
        continue;
      }
      ans+=size-first-cnt;
      size=first;
      if(size<=0)break;

    }
    cout<<ans<<endl;
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}