#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

void solve() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=0;
    int x=INT_MAX;
    int y=INT_MAX;
  
    for(int i=0;i<n;i++){
        if(x>y)swap(x,y);
        if(v[i]<=x){
            x=v[i];
        }
        else if(v[i]<=y){
            y=v[i];

        }
        else{
            x=v[i];
            ans++;
        }

    }
    cout<<ans<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}