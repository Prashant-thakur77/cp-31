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
    ll n,q;
    cin>>n>>q;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
      cin>>b[i];
    }
    int  maxi=max(a[n-1],b[n-1]);
    a[n-1]=maxi;
    for(int i=n-2;i>=0;i--){
      maxi=max(maxi,b[i]);
      if(maxi>a[i]){
        a[i]=maxi;
      }
      else{
        maxi=a[i];
      }
    
    }
    vector<int> presum(n,0);
    presum[0]=a[0];
    for(int i=1;i<n;i++){
      presum[i]=a[i]+presum[i-1];
    }
    /*for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
    cout<<endl;*/
    for(int i=0;i<q;i++){
      ll x,y;
      cin>>x>>y;
      if(x==1){
        cout<<presum[y-1]<<" " ;
      }
      else{
        cout<<presum[y-1]-presum[x-2]<<" ";

      }

    }
    cout<<endl;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}