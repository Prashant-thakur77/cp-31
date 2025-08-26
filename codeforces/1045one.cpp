#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n,a,b;
    cin>>n>>a>>b;
    if(((n-b)%2==1)){
     cout<<"no"<<endl;
    return;
   }
   if(b>a){
    cout<<"yes"<<endl;
    return;
   }
   else if(b==a){
    cout<<"yes"<<endl;
    return;
   }
   bool ok = ((a-b)%2 == 0);
   cout<<(ok?"YES\n":"NO\n");
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}