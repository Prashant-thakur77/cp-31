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
    vector<ll> t(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    for(int i=0;i<n;i++){
      cin>>t[i];
    }
    vector<ll> diff(n,0);
    for(int i=0;i<n;i++){
      diff[i]=v[i]-t[i];
      
    }
    sort(all(diff));
    int cnt=0;
    int low=0;
    int high=n-1;
    while(low<high){
      if(diff[low]+diff[high]<=0){
        low++;
        high--;
        cnt++;
      }
      if(diff[low]+diff[high]>0){
     
        high--;
      
      }

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