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
    string a,b;
    cin>>a>>b;
    vector<ll> v1(n+1,0);
    vector<ll> v2(n+1,0);
    for(int i=0;i<n;i++){
      v1[i+1]=v1[i]+(a[i]-'0');
      v2[i+1]=v2[i]+(b[i]-'0');

    }
    vector<ll> v3(n,0);
    vector<ll> v4(n,0);
    for(int i=0;i<n;i++){
      v3[i]=2*v1[i+1]-(i+1);
      v4[i]=2*v2[i+1]-(i+1);
    }
    sort(all(v4));
    vector<ll> sum(n+1,0);
    for(int i=0;i<n;i++){
      sum[i+1]=sum[i]+v4[i];
      
    }
    ll fullsum=sum[n];
    ll newsum=0;
    for(int i=0;i<n;i++){
      ll no=v3[i];
      ll num=lower_bound(v4.begin(),v4.end(),-no)-v4.begin();
      newsum+=(n-2*num)*no+ fullsum-2*sum[num];
    }
    ll totalsum=n*n*(n+1);
    ll answer=(totalsum-newsum)/2;
    cout<<answer<<endl;
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}