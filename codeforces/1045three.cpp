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
    ll ans=0;
    if(n==2){
      if(v[1]>v[0]){
        cout<<0<<endl;
        return;
      }
      else{
        cout<<v[0]-v[1]<<endl;
        return;
      }
    }
    for(int i=2;i<n;i+=2){
      if(v[i-2]+v[i]>v[i-1]){
        //cout<<"yes"<<endl;
        int no=v[i-2]+v[i]-v[i-1];
        ans+=no;
        if(no<v[i]){
          v[i]=v[i]-no;
        }
        else{
          v[i]=0;
          no=no-v[i];
          v[i-2]=v[i-2]-no;
        }
        
      }
    }
    if(n%2==0){
      if(v[n-1]<v[n-2]){
        ans+=v[n-2]-v[n-1];
      }
    }
    cout<<ans<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}