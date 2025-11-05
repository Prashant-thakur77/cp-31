#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll a,b;
    cin>>a>>b;
    if((b&1)==1){
      if((a&1)==1){
        cout<<a*b+1<<endl;
      }
      else{
        cout<<-1<<endl;
      }


    }
    else{
      if((a&1)==0){
        cout<<a*(b/2)+2<<endl;
      }
      else{
        if(((b/2)&1)==1){
          cout<<-1<<endl;
        }
        else cout<<a*(b/2)+2<<endl;
      }
    }
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}