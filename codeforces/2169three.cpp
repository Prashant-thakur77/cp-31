#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

void func(int n,vector<ll>&v,vector<ll> &pref) {
    for (int i=1;i<=n;i++) {
        pref[i]=pref[i-1]+v[i];
    }
}

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n + 1), pref(n + 1, 0);
    for (int i=1;i<=n;i++) {
        cin >> v[i];
    }
    func(n,v, pref);

    ll ans=0; 
    ll best=0; 
    for(int i=1;i<=n;i++){ 
      ll curr=pref[i]-1LL*i*(i+1); 
      best=max(best,curr); 
      ll gain = best+1LL*i*(i+1)-pref[i]; 
      ans=max(ans,gain); 
    } 
    cout<<pref[n]+ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
