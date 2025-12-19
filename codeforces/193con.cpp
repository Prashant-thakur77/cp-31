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
    ll k;
    cin>>n>>k;

    if(k%2!=0){
      for(int i=0;i<k;i++){
        cout<<n<<" ";
      }
      cout<<endl;
    }
    else{
        bool is=(n&(n-1))==0;
        
        ll a,b;
        if(is){
            a=0;
            b=n;
        }
        else{
            a=n-1;
            b=a^n;
        }
        for(int i=0;i<k-2;i++){
          cout<<n<<" ";
        }
      
        cout<<a<<" "<<b<<endl;
    }
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}