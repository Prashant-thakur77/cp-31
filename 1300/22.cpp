#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

bool check(ll n,ll k){
  if(n<=1) return false;
  if(n==2) return true;
  if(n%2==0){
    
    return false;
  }
  
  for(int i=3;i*i<=n;i+=2){
    if(n%i==0){
      
      return false;
    }
  }
  return true;

    

}

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    ll ans=0;
    if(k>=n){
      cout<<1<<endl;
      return;
    }
    if(k==1){
      cout<<n<<endl;
      return;
    }
    bool isprime=check(n,k);
    if(isprime){
      cout<<n<<endl;
      return;
    }
    for(int i=2;i*i<=n;i++){
      if (n % i == 0) {
        if (n / i <= k) {
            ans = i;
            break;
        }
        if (i <= k) {
            ans = n / i;
        }
    }
    }
    if(ans==0){
      cout<<n<<endl;
      return;
    }
    cout<<ans<<endl;
    return;
    

    
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}