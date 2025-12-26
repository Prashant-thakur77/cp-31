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
    int n;
    cin>>n;
    ll no=pow(2,n);
    //cout<<no<<endl;
    vector<ll> v(no,-1);
   
    cout<<(1LL<<n)-1<<" ";
    for(int i=1;i<=n;i++){
      for(int j=0;j<(1LL<<i);j+=2 ){
        cout<<(j*(1LL<<(n-i))+(1LL<<(n-i))-1)<<" ";
      }
    }
    cout<<endl;
    
    

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}