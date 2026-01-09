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
    ll lastno=-1;
    ll lastind=0;
    ll check=0;
    for(int i=0;i<n;i++){
      cin>>v[i];
      if(i==0)continue;
      if(v[i]<v[i-1] && check==0){
        lastno=v[i-1];
        lastind=i;
        check=1;

      }

    }
    if(lastind==0){
      cout<<0<<endl;
      return;
    }
    //cout<<lastind<<endl;
    ll i=lastind;
    ll cursum=1;
    ll cnt=0;
    ll j=2;
    while(i<n){
      //cout<<i<<endl;
      //cout<<lastno<<endl;
      if(v[i]<lastno)cnt++;
      while(v[i]+cursum<lastno){
        //cout<<cursum<<endl;
        
        cursum+=pow(2,j-1);
        cnt++;
        j++;

      }
      i++;
      lastno=v[i-1];

    }
    cout<<cnt<<endl;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}