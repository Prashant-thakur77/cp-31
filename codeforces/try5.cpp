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
    vector<int> v(7);
    int sum = 0;

        for (int i = 0; i < 7; i++) {
            cin >> v[i];
            sum += v[i];
        }

        int mx = *max_element(v.begin(), v.end());

        cout << (2 * mx - sum) << "\n";
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}