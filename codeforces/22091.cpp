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
    ll n,c,k;
    cin>>n>>c>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    sort(all(v));
    for(int i=0;i<n;i++){
      
      if(c<v[i]){
        break;
      }
      if(v[i]<=c){
        ll no=c-v[i];
        if(k>0){
          if(k>=no){
            k=k-no;
            c+=(v[i]+no);

          }
          else{
            
            c+=(v[i]+k);
            k=0;
          }
        }
        else c+=v[i];
      }
    
      

    }
    cout<<c<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}