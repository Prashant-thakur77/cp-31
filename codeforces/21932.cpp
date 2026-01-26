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
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    int k=n;
    int indstart=-1;
    for(int i=0;i<n;i++){
      if(v[i]!=n-i){
        k=n-i;
        indstart=i;
        break;

      }
    }
    if(indstart==-1){
      for(int i=0;i<n;i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;

    }
    else{
      int indend=-1;
      
      for(int i=0;i<n;i++){
        if(v[i]==k){
          indend=i;
          break;
        }
      }
      //cout<<indstart<<" "<<indend<<endl;
      for(int i=0;i<indstart;i++){
        cout<<v[i]<<" ";
      }
      for(int i=indend;i>=indstart;i--){
        cout<<v[i]<<" ";
      }
      for(int i=indend+1;i<n;i++){
        cout<<v[i]<<" ";
      }
      cout<<endl;
    }

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}