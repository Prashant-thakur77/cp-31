#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007
long long givelc(long long a,long long b){
// cout<<a<<"  "<<b<<endl;
  long long gcd=__gcd(a,b);
  //cout<<"gcd"<<"  "<<gcd<<endl;
  

  //cout<<"lcm   "<<c<<endl;
 
  return gcd;
}



void solve() {
    // Your code here
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
      
    }
   
    long long lcm=0;
  
    for(int i=0;i<n;i+=2){
      lcm=__gcd(lcm,v[i]);
    }
    
    long long lcm2=0;
    for(int j=1;j<n;j+=2){
      lcm2=__gcd(lcm2,v[j]);
    }
    bool flag=true;
    for(int i=1;i<n;i+=2){
      if(v[i]%lcm==0){
        flag=false;
        break;
      }
    }
    if(flag){
      cout<<lcm<<endl;
      return;
    }
    flag=true;
    for(int i=0;i<n;i+=2){
      if(v[i]%lcm2==0){
        flag=false;
        break;
      }
    }
    if(flag){
      cout<<lcm2<<endl;
    }
    else cout<<0<<endl;
    return;
 


}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}