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
    ll ans=1;
    vector<ll> v(10);
    v[1]=3;
    v[0]=1;

    for(int i=2;i<10;i++){
      ll cnt=0;
      for(int j=0;j<10;j++){
        for(int k=0;k<10;k++){
          for(int m=0;m<10;m++){
            if(j+k+m==i){
              cnt++;

            }
          }
        }
      }
      v[i]=cnt;

    }
    string no=to_string(n);
    int o=no.size();
    for(int i=0;i<o;i++){
      int no1=no[i]-'0';
      ans=ans*v[no1];
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