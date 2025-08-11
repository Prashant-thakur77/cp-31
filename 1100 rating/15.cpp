#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    string s;
    cin>>s;
    ll n=s.size();
    s=s+s;
    ll cnt=0;
    ll maxi=-1;
    for(int i=0;i<2*n;i++){
      if(maxi==n)break;
      if(s[i]=='1')cnt++;
      else cnt=0;
      maxi=max(maxi,cnt);
    }
    if(maxi==n){
      cout<<n*n<<endl;
    }
    else if(maxi%2==0){
     cout<<(long long)(maxi -maxi/2 +1)*(maxi-maxi/2)<<endl;

    }
    else{
      cout<<(long long)(maxi-maxi/2)*(maxi -maxi/2)<<endl;
    }
  }


int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}