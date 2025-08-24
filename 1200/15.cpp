#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n,s;
    cin>>n>>s;
    vector<int> v(n);
    ll cnt=0;
    for(int i=0;i<n;i++){
      cin>>v[i];
     
    }
  
    
   
   map<int,int> mp;
   mp[0]=-1;
   int len=-1;
   int sum=0;
   for(int i=0;i<n;i++){
    sum+=v[i];
    if(mp.count(sum-s)){
      len=max(len,i-mp[sum-s]);
    }
    if(!mp.count(sum)){
      mp[sum]=i;
    }

   }
   if(len==-1)cout<<-1<<endl;
   else cout<<n-len<<endl;



}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}