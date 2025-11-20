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
    cin>>n;
    vector<ll> v(n);
    vector<ll> w(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    for(int i=0;i<n;i++){
      cin>>w[i];
    }
    ll xor1=v[0];
    ll xor2=w[0];
    for(int i=1;i<n;i++){
      xor1=xor1^v[i];
      xor2=xor2^w[i];
    }
    int check=-10;
    for(int i=0;i<n;i++){
      if(v[i]!=w[i]){
        check=i;
      }
    }
    if(check==-10 || xor1==xor2){
      cout<<"tie"<<endl;
    }
    else if(check%2==0){
      cout<<"Ajisai"<<endl;
    }
    else{
       cout<<"Mai"<<endl;

    }
    return;
    

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}