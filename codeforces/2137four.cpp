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
    vector<vector<int>> pos(n+1);
    for(int i=0;i<n;i++){
      pos[v[i]].push_back(i);
    }
    vector<int> ans(n,-1);
    int flag=0;
    int point=0;
   for(int i=1;i<=n;i++){
    int cnt=pos[i].size();
    if(cnt==0)continue;
    if(cnt%i!=0){
      flag=1;
      break;
    }
    for(int j=0;j<cnt;j+=i){
      point++;
      for(int k=0;k<i;k++){
        ans[pos[i][j+k]]=point;

      }

    }
   }
   if(flag==1){
    cout<<-1<<endl;
    return;
   }
    for(int i=0;i<n;i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;
    return;
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}