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
    vector<int> v(n);

    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    vector<int> div;
    for(int i=1;i<n;i++){
      if(n%i==0){
        div.push_back(i);
      }
    }
    int ans=1;
    int gcd=v[0];
    for(int i=1;i<n;i++){
      gcd=__gcd(gcd,v[i]);
    }
    if(gcd!=1){
      cout<<div.size()+1<<endl;
      return;
    }
    else{
      //cout<<div.size()<<endl;
      for(int i=0;i<div.size();i++){
        int no=div[i];
        int gcd1=0;
        for(int j=0;j+no<n;j++){
          gcd1=__gcd(gcd1,abs(v[j]-v[j+no]));

        }
        if(gcd1!=1){
          ans++;
        }
      }
      cout<<ans<<endl;
    }


}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}