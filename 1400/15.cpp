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
    ll x,y;
    cin>>x>>y;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    vector<ll> frontadd(n,0);
    vector<ll> backadd(n,0);
    vector<ll> frontor(n,0);
    vector<ll> backor(n,0);
    frontadd[0]=v[0];
    backadd[n-1]=v[n-1];
    frontor[0]=v[0];
    backor[n-1]=v[n-1];
    for(int i=1;i<n;i++){
      frontadd[i]=v[i]+frontadd[i-1];
      frontor[i]=v[i]^frontor[i-1];
    }
    for(int i=n-2;i>=0;i--){
      backadd[i]=v[i]+backadd[i+1];
      backor[i]=v[i]^backor[i+1];
    }
    map<int,int> ans;
    ans[x+frontadd[n-1]]=1;
     ans[(x^frontor[n-1])]=1;
    for(int i=0;i<n-1;i++){
      ll no=frontadd[i];
      ll no2=backor[i+1];
      ans[(x+no)^no2]=1;

    }
    for(int i=0;i<n-1;i++){
      ll no3=backadd[i+1];
      ll no4=frontor[i];
      ans[(x^no4)+no3]=1;

    }
    if(ans[y]){
      cout<<"Alice"<<endl;
    }
    else cout<<"Bob"<<endl;



}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}