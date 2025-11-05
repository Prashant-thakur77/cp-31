#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

void solve() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<ll> a(q);
    for (auto &x : a) cin >> x;

    int cntB = count(all(s), 'B');
    vector<int> nxtB(n, -1), dist(n, -1);
    if (cntB > 0) {
        int last = -1;
        for (int i = 2 * n - 1; i >= 0; --i) {
            int idx = i % n;
            if (s[idx] == 'B') last = idx;
            if (last != -1) {
                nxtB[idx] = last;
                dist[idx] = (last - idx + n) % n;
            }
        }
    }

    for (auto val : a) {
        ll steps = 0;
        int pos = 0;
        if (!cntB) {
            cout << val << '\n';
            continue;
        }
        while (val > 0) {
            if (s[pos] == 'A') {
                if (dist[pos] == 0) {
                    steps += val;
                    break;
                }
                ll jump = min<ll>(dist[pos], val);
                steps += jump;
                val -= jump;
                if (val == 0) break;
                pos = nxtB[pos];
            } else {
                val >>= 1;
                steps++;
                pos = (pos + 1) % n;
            }
        }
        cout << steps << '\n';
    }
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
