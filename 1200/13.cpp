#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    vector<ll> v(k);
    for(int i=0;i<k;i++){
      cin>>v[i];
    }
    sort(all(v));
    v.push_back(v[0]);
    vector<ll> ans;
    for(int i=0;i<k-1;i++){
    
      ans.push_back(v[i+1]-v[i]-1);

    }
    ans.push_back(v[0]+n-v[k-1]-1);
    sort(ans.rbegin(),ans.rend());
    ll numdays=0;
    ll daysav=0;
    for(auto &it: ans){
      ll currgap=it-numdays*2;
      if(currgap>0){
        daysav++;
        currgap-=2;
        if(currgap>0)daysav+=currgap;
        numdays+=2;
      }
    }
    cout<<n-daysav<<endl;
    return;

   


    

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}