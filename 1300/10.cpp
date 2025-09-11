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
   
    ll ans1=0;
    vector<ll> ans;

    for(int i=0;i<n;i++){
     if(v[i]>=i+1) continue;
     
       ans1+=(ll)(lower_bound(ans.begin(),ans.end(),v[i])-ans.begin());
       ans.push_back(i+1);
      

    }
    cout<<ans1<<endl;
    return;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}