#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        // Use a set for quick lookup (similar to "if i not in a")
        unordered_set<int> s(a.begin(), a.end());

        for (int i = 0; i <= n; ++i) {
            if (s.find(i) == s.end()) {
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}
