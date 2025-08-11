#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    sort(all(v));
    vector<ll> a(n,0);
    if(v[0]!=1){
      cout<<"no"<<endl;
        return;

    }
    else if(n>=2 && v[1]!=1){
      cout<<"no"<<endl;
        return;
      
    }
    a[0]=1;
    ll maxsum=1;

    for(int i=1;i<n;i++){
      if(v[i]>maxsum){
        cout<<"no"<<endl;
        return;
      }
      else{
        a[i]=v[i];
        maxsum+=a[i];
      }
      

    }
    cout<<"yes"<<endl;
    return;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}