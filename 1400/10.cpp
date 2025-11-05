#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

void solve() {
    ll n,m; cin >> n >> m;
    ll n0 = n;
    int cnt2 = 0, cnt5 = 0;
    ll k = 1;
    while (n > 0 && n % 2 == 0) {
        n /= 2;
        cnt2++;
    }
    while (n > 0 && n % 5 == 0) {
        n /= 5;
        cnt5++;
    }
    while (cnt2 < cnt5 && k * 2 <= m) {
        cnt2++;
        k *= 2;
    }
    while (cnt5 < cnt2 && k * 5 <= m) {
        cnt5++;
        k *= 5;
    }
    while (k * 10 <= m) {
        k *= 10;
    }
    if (k == 1) {
        cout << n0 * m << endl;
    } else {
        k *= m / k;
        cout << n0 * k << endl;
    }
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}