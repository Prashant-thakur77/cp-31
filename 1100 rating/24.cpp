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
    ll maxi=-1;
    for(int i=0;i<n;i++){
      cin>>v[i];

    }
    for(int i=0;i<n;i++){
      
      if(v[i]!=i){
        maxi=i;
        break;
      }

    }

    
     for(int i=maxi;i<n;i++){
      if((v[i]!=i)){
        maxi=maxi&v[i];
    
      
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