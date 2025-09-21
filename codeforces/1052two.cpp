#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> groups(n);
    vector<int> freq(m + 1, 0);

    for (int i = 0; i < n; i++) {
        int sz;
        cin >> sz;
        groups[i].resize(sz);
        for (int j = 0; j < sz; j++) {
            cin >> groups[i][j];
            freq[groups[i][j]]++;
        }
    }

    for (int x = 1; x <= m; x++) {
        if (freq[x] == 0) {
            cout << "NO\n";
            return;
        }
    }

    int flexible = 0;
    for (int i = 0; i < n; i++) {
        bool removable = true;
        for (int x : groups[i]) {
            if (freq[x] == 1) {
                removable = false;
                break;
            }
        }
        if (removable) {
            flexible++;
            if (flexible >= 2) {
                cout << "YES\n";
                return;
            }
        }
    }

    cout << (flexible >= 2 ? "YES\n" : "NO\n");
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
