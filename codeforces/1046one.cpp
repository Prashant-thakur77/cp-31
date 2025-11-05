#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll no=max(a,b);
    ll no2=min(a,b);
    ll ans1=ceil((double)no/(no2+1));
    if(ans1>=3){
      cout<<"no"<<endl;
      return;
    }
    ll no3=c-a;
    ll no4=d-b;
    ll no5=max(no3,no4);
    ll no6=min(no3,no4);
    ll ans2=ceil((double)no5/(no6+1));
    if(ans2>=3){
      cout<<"no"<<endl;
      return;
    }
    cout<<"yes"<<endl;
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}