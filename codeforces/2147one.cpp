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
    int x,y;
    cin>>x>>y;
    if(y==1 || x==y){
      cout<<-1<<endl;
      return;
    }
    if(y>x){
      cout<<2<<endl;
      return;
    }
    if((x-1)>y){
      cout<<3<<endl;
    }
    else cout<<-1<<endl;
    return;

    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}