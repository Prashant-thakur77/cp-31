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
    long long ans=2;
  
   while(1){
      set<long long> st;
      for(int i=0;i<n;i++){
        st.insert(v[i]%ans);
      }
      if(st.size()==2){
        cout<<ans<<endl;
        break;
      }
      ans=ans*2;
      
    }
    return;
    
    
    

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}