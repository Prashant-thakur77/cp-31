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
    char x;
    cin>>x;
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<n;i++){
      if(s[i]!=x){
        flag=1;
        
      }
    }
    if(flag==0){
      cout<<0<<endl;
      return;
    }
    for(int i=n-1;i>=n/2;i--){
      if(s[i]==x){
        cout<<1<<endl;
        cout<<i+1<<endl;
        return;
      }
    }
    cout<<2<<endl;
    cout<<n<<" "<<n-1<<endl;
    return;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}