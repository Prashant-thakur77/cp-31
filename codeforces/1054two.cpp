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
    ll n;
    cin>>n;
    vector<int> v(n);
   
    for(int i=0;i<n;i++){
      cin>>v[i];
    
    }
    sort(all(v));
    ll maxi=0;
    for(int i=0;i<n-1;i+=2){
      maxi=max(maxi,(ll)v[i+1]-(ll)v[i]);
    }
    cout<<maxi<<endl;


}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}