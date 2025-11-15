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
    ll a=0,b=0;
    ll neg=0;
    ll ans=0;
    for(int i=0;i<n;i++){
      if(neg%2==0)a++;
      else b++;
      if(v[i]<0)neg++;
      if(neg%2==0)ans+=a;
      else ans+=b;

    }
    cout<<(n*(ll)(n+1)/2)-ans<<" "<<ans<<endl;
    return;


}

int32_t main() {
    fast_io;
     solve();
    return 0;
}