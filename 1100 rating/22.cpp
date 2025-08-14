#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007
long long modpow(long long n,long long x){
    long long ans=1;
    while(x>0){
        if(x&1) ans=(ans*n)%mod;
        n=(n*n)%mod;
        x>>=1;

    }
    return ans%mod;

}

void solve() {
    // Your code here
    ll n;
    cin>>n;
    ll inver6=modpow(6,mod-2);
    long long term1=(n*(n+1))%mod;
    long long term2=((term1)*(2*n+1))%mod;
    long long sum1=((term2)*(inver6))%mod;
  
    long long term3=((term1)*(2*n-2))%mod;
    long long sum2=((term3)*(inver6))%mod;
    cout<<((sum1+sum2)*2022)%mod<<endl;




}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}