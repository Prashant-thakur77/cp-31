#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
bool func(vector<pair<int,int>> v,int mid){
  int n=v.size();
  ll low=0;
  ll high=0;
  for(int i=0;i<n;i++){
    ll l=v[i].first;
    ll h=v[i].second;
    low=max(l,low-mid);
    high=min(h,high+mid);
    if(low>high)return false;

  }
}

void solve() {
    // Your code here
    ll n;
    cin>>n;
    vector<pair<int,int>> v(n);
   
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
      int x,y;
      cin>>x>>y;
      v[i]={x,y};
      maxi=max(maxi,v[i].second);

    }
    int low=0;
    int high=maxi+1;
    
    while(low<=high){
      int mid=(low+high)/2;
      bool ans=func(v,mid);
      if(ans==true){
        high=mid-1;
      }
      else {
        low=mid+1;
      }

    }
    cout<<low<<endl;


}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}