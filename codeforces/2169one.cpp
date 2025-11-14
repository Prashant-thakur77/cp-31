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
    ll n,m;
    cin>>n>>m;
    vector<ll> v(n);
    ll ans=0;
    for(int i=0;i<n;i++){
      cin>>v[i];
      
    }
    auto it=lower_bound(v.begin(),v.end(),m)-v.begin();
    if(n%2==0){
        if(it<n/2){
    m++;
    cout<<m<<endl;


   }
   else if(it>=n/2){
    m--;
    cout<<m<<endl;
    


   }

    }
    else{
        if(it<=n/2){
    m++;
    cout<<m<<endl;


   }
   else if(it>n/2){
    m--;
    cout<<m<<endl;
    


   }
    }
 


   
    
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}