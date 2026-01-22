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
    vector<vector<ll>> v;
    for(ll i=0;i<n;i++){
      ll a,b;
      cin>>a>>b;
      v.push_back({a,b,i+1});
    }
    sort(v.begin(),v.end(),[&](vector<ll>&v1,vector<ll>&v2){
      if(v1[0]==v2[0]){
        return v1[1]>v2[1];
      }
      else{
        return v1[0]<v2[0];
      }
    });
    int maxi=v[0][1];
    int ind=v[0][2];
    for(int i=1;i<n;i++){
      if(maxi>=v[i][1]){
        cout<<v[i][2]<<" "<<ind<<endl;
        return;

      }
      else{
        maxi=v[i][1];
        ind=v[i][2];
      }
    }
    cout<<-1<<" "<<-1<<endl;

    
}

int32_t main() {
    fast_io;
     solve();
    return 0;
}