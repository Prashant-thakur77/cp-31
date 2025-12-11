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
    string s;
    cin>>s;
    s=s+s;
    int maxi=0;
    int cnt=0;
    for(int i=0;i<2*n;i++){
      if(s[i]=='0'){
        cnt++;
        maxi=max(maxi,cnt);
      }
      else cnt=0;

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