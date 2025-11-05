#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    vector<int> a(n,0);
    bool ok=true;
   for(int i=n;i>=1&& ok;--i){
    bool done=false;
    for(int k=0;k+i<=n;++k){
      bool can=true;
      for(int j=k;j<i+k;++j){
        if(a[j]+1>v[j]){
          can=false;
          break;
        }
      }
      if(can){
        for(int j=k;j<k+i;++j){
          a[j]+=1;
        }
        done=true;
        break;
      }
    }
    if(!done) ok=false;
   }
   if(ok && a==v)cout<<"yes"<<endl;
   else cout<<"no"<<endl;
   return ;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}