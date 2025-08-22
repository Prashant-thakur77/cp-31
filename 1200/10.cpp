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
    vector<ll> v(n);
    vector<ll> height(k);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    vector<ll> t(n,0);
    t[0]=v[0];
    for(int i=1;i<n;i++){
      t[i]=t[i-1]+v[i];
    }
 

    for(int i=0;i<k;i++){
      cin>>height[i];
    }
    vector<ll> ne(n);
    ne[0]=v[0];
    ll maxi=ne[0];
    for(int i=1;i<n;i++){
      if(v[i]>ne[i-1]){
        maxi=v[i];
        ne[i]=maxi;

        
      }
      else{
        ne[i]=maxi;
      }
    }

    ll maxii=ne[0];
    ll curr=0;
    vector<ll> ans;
    for(int i=0;i<k;i++){
      
      ll low=0;
      ll high=n-1;
      ll no=height[i];
      if(no<ne[0]){
        ans.push_back(0);
        continue;
      }
     
      

      while(low<=high){
        ll mid=(low+high)/2;
        if(ne[mid]>no){
          high=mid-1;
        }
        else low=mid+1;

      }
      
      curr=t[high];
      
      ans.push_back(curr);
    }
    for(int i=0;i<k;i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}