#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
ll dig_sum(ll n){
  string k=to_string(n);
  ll sum=0;
  for(int i=0;i<k.size();i++){
    sum+=k[i]-'0';
  
  }
  return sum;
}

void solve() {
    // Your code here
    ll n;
    cin>>n;
    ll ans=0;
    for(int i=n;i<n+1000;i++){
      if(i-dig_sum(i)==n){
        ans+=1;
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