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
    ll x=v[0];
    int flag=0;
   
    ll ind=-1;
    for(int i=0;i<n;i++){
      if(v[i]!=x){
     
        ind=i+1;


        flag=1;
        break;
      }
    }
    if(flag==0){
      cout<<"no"<<endl;
      return;
    }
    cout<<"yes"<<endl;
    for(int i=1;i<n;i++){
      if(v[i]!=x){
        cout<<1<<" "<<i+1<<endl;


      }
      else{
        cout<<ind<<" "<<i+1<<endl;
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