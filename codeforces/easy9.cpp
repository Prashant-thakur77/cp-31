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
    int n,j,k,mx=0;
    cin>>n>>j>>k;
    vector<int>a(n+1);

    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>mx) mx=a[i];
    }

    if(k>1||a[j]==mx) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return;
}
    

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}