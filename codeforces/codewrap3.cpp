#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    int x, y;
    getline(cin, a);
    getline(cin, b);
    cin >> x >> y;

    int m = a.size(), n = b.size();
    vector<vector<int>> ans(m + 1, vector<int>(n + 1));

    for (int i = 0; i <= m; i++) ans[i][0] = i * x;
    for (int j = 0; j <= n; j++) ans[0][j] = j * x;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if((a[i - 1] == b[j - 1])){
                ans[i][j] = ans[i - 1][j - 1];

            }
            else{
                 ans[i][j] = ans[i - 1][j - 1] + y;

            }
           
            ans[i][j] = min({ans[i][j], ans[i - 1][j] + x, ans[i][j - 1] + x});
        }
    }

    cout << ans[m][n] << endl;
    return 0;
}
