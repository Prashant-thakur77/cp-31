#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

void solve() {
    int m=0;
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long double sum = 0, no =n-k+1;
    for (int i = 0; i < n; i++) {
        int w;
        if (i < k && i < n-k+1) {
            w = i + 1;             
        }
        else if (i >= n - (n-k+1)) {  
            w = n - i; 
        }              
        else {
            w = min(k, n-k+1);    
        }

        sum += (long double)w * v[i];
       
    }

    long double ans = sum / no;
    cout << fixed << setprecision(9) << ans << "\n";
}


int32_t main() {
    solve();
    return 0;
}