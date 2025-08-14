#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n,l,r;
    cin>>n>>l>>r;
    for(int i=1;i<=n;i++){
       ll no=i-l%i;
      if((l%i)==0){
        no=0;
        
      }
      if(no+l>r){
        cout<<"NO"<<endl;
        return;
      }
      
    }
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++){
       ll no=i-l%i;
      if((l%i)==0){
        no=0;
        
      }
      cout<<l+no<<" ";
      
      
      
    }
    cout<<endl;
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}