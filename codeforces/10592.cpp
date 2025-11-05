#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) {
        int len;
        string bin;
        cin >> len >> bin;

        vector<int> idx0, idx1;

        for (int pos = 0; pos < len; ++pos) {
            if (bin[pos] == '0')
                idx0.push_back(pos + 1);
            else
                idx1.push_back(pos + 1);
        }

  
        vector<int>& chosen = (idx0.size() <= idx1.size()) ? idx0 : idx1;

        cout << chosen.size() << "\n";
        for (int i = 0; i < (int)chosen.size(); ++i) {
            if (i) cout << ' ';
            cout << chosen[i];
        }
        cout << "\n";
    }

    return 0;
}
