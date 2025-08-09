#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);

    for(int i=0;i<n;i++){
      cin>>v[i];
 
    }
    sort(all(v));
   vector<ll> preSum(n);
   preSum[0]=v[0];
   for(int i=1;i<n;i++){
    preSum[i]=v[i]+preSum[i-1];
    
   }
   ll maxi=-1;
   for(int i=0;i<=k;i++){
    ll second=k-i;
    int left=2*i;
    int right=n-second-1;
    ll currSum=preSum[right]-(left==0?0:preSum[left-1]);
    maxi=max(maxi,currSum);
   }
   cout<<maxi<<endl;
    return;



    }
    

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}