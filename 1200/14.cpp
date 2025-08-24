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
    vector<string> grid(n);
    for(int i=0;i<n;i++){
     
        cin>>grid[i];
      }
    
    ll ans=0;
   
    for(int i=0;i<(n+1)/2;i++){
      for(int j=0;j<n/2;j++){
        int a=grid[i][j]-'0';
        int b=grid[j][n-1-i]-'0';
        int c=grid[n-1-i][n-1-j]-'0';
        int d=grid[n-1-j][i]-'0';
        int sum=a+b+c+d;
        ans+=min(sum,4-sum);
      }
    }
    cout<<ans<<endl;
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}