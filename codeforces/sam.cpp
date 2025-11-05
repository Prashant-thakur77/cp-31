#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
int ans(int k,int a,int b,int x,int y){
  ll cur=0;
  cur+=max((k-a+x)/x,0);
  k-=max((k-a+x)/x,0)*x;
  cur+=max((k-b+y)/y,0);
  return cur;

}

void solve() {
    // Your code here
    int k,a,b,x,y;
    cin>>k>>a>>b>>x>>y;
    cout<<max(ans(k,a,b,x,y),ans(k,b,a,y,x))<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}