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
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    ll check=0;
    ll i=0;
    ll cnt=0;
    while(i<n){
      if(check==0){
        if(i==n-1){
          if(v[i]==1)cnt++;
          else i++;

        }
        else if(v[i]==0 && v[i+1]==0){
          i++;
        }
        else if(v[i]==0 && v[i+1]==1){
          i++;
        }
        else if(v[i]==1 && v[i+1]==0){
          i+=2;
          cnt++;
        }
        else{
          i++;
          cnt++;
        }
        check=1;

      }
      else{
        if(i==n-1){
          i++;
          continue;
        }
        else if(v[i]==1 && v[i+1]==1)i+=2;
        else if(v[i]==0 && v[i+1]==0)i++;
        else if(v[i]==0 && v[i+1]==1)i+=2;
        else if(v[i]==1 && v[i+1]==0)i++;
        check=0;

      }
    }
    cout<<cnt<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}