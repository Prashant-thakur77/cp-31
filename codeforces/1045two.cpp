#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define Mod 1000000007
ll modpow(ll a,ll e,ll mod){
    ll res=1%mod;
    a%=mod;
    while(e>0){
        if(e&1)res=(ll)res*a%mod;
        a=(ll)a*a%mod;
        e>>=1;
    }
    return res;
}


void solve() {
    // Your code here
     vector<int> p = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
73, 79, 83, 89, 97, 101, 103, 107, 109, 113,
127, 131, 137, 139, 149, 151, 157, 163, 167, 173,
179, 181, 191, 193, 197, 199, 211, 223, 227, 229,
233, 239, 241, 251, 257, 263, 269, 271, 277, 281,
283, 293, 307, 311, 313, 317, 331, 337, 347, 349,
353, 359, 367, 373, 379, 383, 389, 397, 401, 409,
419, 421, 431, 433, 439, 443, 449, 457, 461, 463,
467, 479, 487, 491, 499, 503, 509, 521, 523, 541};
     ll n,k;
     cin>>n>>k;
     vector<ll> v(n);
     for(int i=0;i<n;i++){
      cin>>v[i];
     }
     int d=-1;
     for(auto &it: p){
      if(it<=k+1 && k%it!=0){
        d=it;
        break;
      }
     }
     ll no=k%d;
     ll inver=modpow(no,d-2,d);
     for(int i=0;i<n;i++){
      int rem=(int)v[i]%d;
      ll ans=(((d-rem)%d)*inver)%d;
      v[i]+=ans*k;
     }
     for(int i=0;i<n;i++){
      cout<<v[i]<<" ";
     }
     cout<<endl;
     return;
     

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}