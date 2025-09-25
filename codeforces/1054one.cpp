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
     int cntneg=0;
     int cnt0=0;
    for(int i=0;i<n;i++){
      cin>>v[i];
      if(v[i]==-1)cntneg++;
      if(v[i]==0)cnt0++;
    }
    int total=0;
    total+=cnt0;
    if(cntneg%2==1){
      total+=2;
    }
    cout<<total<<endl;
   

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}