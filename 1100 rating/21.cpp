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
    vector<int> v[1001];
    vector<int> ans(1001,0);

    for(int i=1;i<=1000;i++){
      for(int j=1;j<=1000;j++){
        if(__gcd(i,j)==1){
          v[i].push_back(j);
        }
      }


    }
    for(int i=1;i<=n;i++){
      int n;
      cin>>n;
      ans[n]=i;
      
    }
    int maxi=-1;
     for(int i=1;i<=1000;i++){
      if(ans[i]==0)continue;
      for(int j:v[i]){
        if(ans[j]!=0){
          maxi=max(maxi,ans[i]+ans[j]);
        }
      }


    }
    cout<<maxi<<endl;
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}