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
    ll a,b,k;
    cin>>a>>b>>k;
    vector<int> boy(a);
    for(int i=0;i<k;i++){
      int temp;
      cin>>temp;
      boy[temp-1]++;

    }
    vector<int> girl(b);
    for(int i=0;i<k;i++){
      int temp;
      cin>>temp;
      girl[temp-1]++;
    }
  
   ll cnt=1LL*(k)*(k-1)/2;
   
   for(auto & it:boy){
    cnt-=1LL*(it)*(it-1)/2;
   }
   for(auto & it:girl){
    cnt-=1LL*(it)*(it-1)/2;
   }
   cout<<cnt<<endl;
   return;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}