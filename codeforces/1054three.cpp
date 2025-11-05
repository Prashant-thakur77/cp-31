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
     ll n,k;
    cin>>n>>k;
    vector<int> v(n);
    map<int,int> mp;
    int cnt=0;

    for(int i=0;i<n;i++){
      cin>>v[i];
      mp[v[i]]++;
      if(v[i]==k)cnt++;
      
    }
    int cnt2=0;
    for(int i=0;i<k;i++){
      if(mp[i]<1){
        cnt2++;
      }
    }
    cout<<max(cnt,cnt2)<<endl;


}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}