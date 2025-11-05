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
    vector<ll> v(n);
    ll mini=LLONG_MAX;
    for(int i=0;i<n;i++){
      cin>>v[i];
      mini=min(mini,v[i]);
    }
    if(k>=3){
      cout<<0<<endl;
      return;
    }
    sort(all(v));
    if(k==1){
      for(int i=1;i<n;i++){
        mini=min(mini,(ll)v[i]-v[i-1]);
      }
      cout<<mini<<endl;
      return;
      
    }
    else{
      for(int i=1;i<n;i++){
        mini=min((ll)mini,v[i]-v[i-1]);

      }
      if(mini==0){
        cout<<mini<<endl;
        return;

      }
      ll beg=v[0];
      set<ll> st;
      for(int i=0;i<n-1;i++){
        int str=n-1;

        while(v[str]-v[i]>(beg-mini) && str>i){
          st.insert((ll)v[str]-v[i]);
          
          str--;
        }
        if(str==n-1){
          break;
        }
        
      }
      vector<ll> diff(st.begin(),st.end());
      for(int i=0;i<n;i++){
        
        auto it=lower_bound(diff.begin(),diff.end(),v[i]);
        if(it!=diff.end()){
          mini=min(mini,abs(*it-v[i]));
        }
        if(it!=diff.begin()){
          it--;
          mini=min(mini,abs(*it-v[i]));
        }

      }
      cout<<mini<<endl;
      return;
      

    }
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}