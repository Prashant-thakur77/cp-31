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
    ll x,y;
    cin>>x>>y;
    int k=0;
    if(y>0 && x==2*y){
      cout<<"yes"<<endl;
      k=1;
    }
    else if(x%3==0 && y==0){
      cout<<"yes"<<endl;
      k=1;
    }
    else if(y<0 && x==-(4*y)){
      cout<<"yes"<<endl;
      k=1;

    }
    else{
      
      for(int i=1;i<1000;i++){
        if(y> 0 && x==(2*y+3*i)){
          cout<<"yes"<<endl;
          k=1;
          break;

        }
      }
    }
    if(k!=1){
      for(int i=1;i<1000;i++){
        if(y<0 && x==(4*y+3*i)){
          cout<<"yes"<<endl;
          k=1;
          break;

        }
      }

    }
    if(k!=1){
      cout<<"no"<<endl;
    }
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}