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
    vector<ll> w(n);
    map<pair<int,int>,ll> mp;
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    for(int i=0;i<n;i++){
      cin>>w[i];
    }
    ll free0=0;
    for(int i=0;i<n;i++){
      if(v[i]!=0){
        ll num=-w[i];
        ll den=v[i];
        ll g=__gcd(abs(num),abs(den));
        num=num/g;
        den=den/g;
        if (den < 0) {
        num = -num;
        den = -den;
        }
        mp[{num, den}]++;

      }
      else{
        if(w[i]==0)free0++;


      }
      
    }
    ll macnt=0;
    for(auto & it: mp){
      macnt=max(macnt,it.second);
    }
    cout<<macnt+free0<<endl;

}

int32_t main() {
    fast_io;
     solve();
    return 0;
}