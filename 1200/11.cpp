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
    string s;
    cin>>s;
    vector<bool> remov(n+1,false);
    ll ans=0;
    for(int i=1;i<=n;i++){
      for(int j=i;j<=n;j+=i){
        if(s[j-1]=='1') break;
        if(remov[j])continue;
        else{
          ans+=i;
          remov[j]=true;
        }
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