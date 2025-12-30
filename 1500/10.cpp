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
    vector<ll> v(n);
    int arrxor=0;
    for(int i=0;i<n;i++){
      cin>>v[i];
      arrxor=arrxor^v[i];
    }
    //cout<<arrxor<<endl;
    if(arrxor==0){
      cout<<"yes"<<endl;
      return;
    }
    else{
      vector<ll> prefixxor(n,0);
      vector<ll> suffixxor(n,0);
      ll l=-1;
      ll r=-1;
      prefixxor[0]=v[0];
      suffixxor[n-1]=v[n-1];
      for(int i=1;i<n;i++){
        prefixxor[i]=prefixxor[i-1]^v[i];
      }
      for(int i=n-2;i>=0;i--){
        suffixxor[i]=suffixxor[i+1]^v[i];
      }
      for(int i=0;i<n;i++){
        if(prefixxor[i]==arrxor){
          l=i;
          break;
        }
      }
      for(int i=n-1;i>=0;i--){
        if(suffixxor[i]==arrxor){
          r=i;
          break;
        }
      }
      //cout<<l<<" "<<r<<endl;
      if(l!=-1 && r!=-1 && l<r){
        cout<<"yes"<<endl;
        
      }
      else cout<<"no"<<endl;
      return;


    }
   


}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}