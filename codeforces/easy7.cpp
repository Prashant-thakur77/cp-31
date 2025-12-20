#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int mn = *min_element(a.begin(), a.end());
    int mx = *max_element(a.begin(), a.end());
    if(mn == mx){
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
    for(int i = 0; i < n; i++){
        cout << (1 + (a[i] == mx)) << " \n"[i + 1 == n];
    }
}

int32_t main(){
    fast_io;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
