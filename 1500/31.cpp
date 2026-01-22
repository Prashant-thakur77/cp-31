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
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll cnt1=0;
    
    for(int i=0;i<n;i++){
      cin>>v[i];
      if(v[i]==1)cnt1++;
    }
    if(cnt1){
      cout<<n-cnt1<<endl;
      return;
    }
    ll gcd=v[0];
    for(int i=0;i<n;i++){
      gcd=__gcd(gcd,v[i]);
      
    }
    if(gcd!=1){
      cout<<-1<<endl;
      return;
    }
    ll ans=2*n;
    for(int i=0;i<n;i++){
      ll no=v[i];
      for(int j=i+1;j<n;j++){
        no=__gcd(no,v[j]);
        if(no==1){
          ans=min(ans,j-i+n-1);
        }
        
      }
    }
    cout<<ans<<endl;






}

int32_t main() {
    fast_io;
     solve();
    return 0;
}