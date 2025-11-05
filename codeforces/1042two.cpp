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
    vector<int> v(n,0);
    if((n&1)==1){
      
      for(int i=0;i<n;i++){
        if((i&1)==0){
          v[i]=-1;
         
        }
        else v[i]=3;
      }

    }
    else{
      for(int i=0;i<n-1;i++){
        if((i&1)==0){
          v[i]=-1;
         
        }
        else v[i]=3;
      }
      v[n-1]=2;


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