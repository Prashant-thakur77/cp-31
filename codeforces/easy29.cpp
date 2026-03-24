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
     int n;
    cin >> n;

    vector<int> a(n + 1), f(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = n; i >= 1; i--) {
        int smaller = 0, greater = 0;

        for (int j = i + 1; j <= n; j++) {
            if (a[i] > a[j]) smaller++;
            if (a[i] < a[j]) greater++;
        }

        f[i] = max(smaller, greater);
    }

    for (int i = 1; i <= n; i++) {
        cout << f[i] << " ";
    }
    cout << "\n";

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}