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
    ll k=0;
    ll cost=0;
    for(ll i=0;i<50;i++){
      if(pow(3,i)>n){
        break;
      }
     
      k=i;
      
     

    }
   // cout<<k<<endl;
    ll no=pow(3,k);
    while(n>0){
      ll times=n/no;
       n=n%no;
      
       cost+=times*(pow(3,k+1)+(long long)k*pow(3,k-1));
      // cout<<cost<<endl;
       no=no/3;
       k--;
    }
    cout<<cost<<endl;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}