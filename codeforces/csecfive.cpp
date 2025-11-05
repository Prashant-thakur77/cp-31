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
    vector<int> v(n);
    ll sum=0;
    ll maxi=0;
    ll ind=-1;
    for(int i=0;i<n;i++){
      cin>>v[i];
      sum+=v[i];
      if(maxi<v[i]){
        maxi=v[i];
        ind=i+1;
      }
    }
    if(sum%2!=0){
      cout<<0<<endl;
      return;
    }
   while(true){
        for(int i=0;i<n;i++) {
            if(v[i]%2!=0) {
                cout<<1<<endl;
                cout<<i+1<<endl;
                return;
            }
        }
       
        for(int i=0;i<n;i++){
          v[i]/=2;

        } 
    }
}

int32_t main() {
    fast_io;
    solve();
    return 0;
}