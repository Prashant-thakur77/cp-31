#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n;
    cin>>n;
    vector<pair<int,int>> a(n);
    vector<pair<int,int>> b(n);
    vector<pair<int,int>> c(n);
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      a[i]={x,i};
    }
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      b[i]={x,i};
    }
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      c[i]={x,i};
    }
    sort(all(a));
    sort(all(b));
    sort(all(c));
    long long ans=0;
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
          int one=a[i].second;
          int two=b[j].second;
          int three=c[k].second;
          long long no=a[i].first+b[j].first+c[k].first;
          if(one==two || two==three ||one==three)continue;
          ans=max(ans,no);

        }
      }
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