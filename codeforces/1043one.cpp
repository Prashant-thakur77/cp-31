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
    string a;
    cin>>a;
    ll m;
    cin>>m;
    string b,c;
    cin>>b>>c;
    for(int i=0;i<m;i++){
      if(c[i]=='D'){
         a.push_back(b[i]);
       

      }
      else{
         a.insert(a.begin(),b[i]);
       

      }
    }
    cout<<a<<endl;
    return ;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}