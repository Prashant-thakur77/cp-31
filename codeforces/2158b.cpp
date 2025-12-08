#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

void solve() {
  int n;
  cin>>n;
  vector<int> v(2*n);
  for(int i=0;i<2*n;i++){
    cin>>v[i];
  }
  map<int,int> mp;
  for(int i=0;i<2*n;i++){
    mp[v[i]]++;
  }
  int cnt1=0;
  int cnt2=0;
  int cnt3=0;
  for(auto & it: mp){
    if(it.second&1){
      cnt1++;
    }
    else if((it.second%4)!=0){
      cnt2++;
    }
    else cnt3++;

  }
  int ans = cnt1+2*cnt2+2*cnt3;
  if((cnt3&1) && cnt1 == 0)ans -= 2; 
  cout << ans << "\n";
  
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}