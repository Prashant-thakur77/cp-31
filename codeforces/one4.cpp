#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = 4e18;
const int moves[3][2] = {{0, 0}, {0, 1}, {1, 0}};

void solve() {
    ll X, Y;
    cin >> X >> Y;
    vector<vector<vector<ll>>> dp(32, vector<vector<ll>>(3, vector<ll>(3, INF)));
    vector<vector<vector<int>>> path(32, vector<vector<int>>(3, vector<int>(3)));
    dp[31][1][1] = 0;

    for (int i = 30; i >= 0; --i) {
        ll bitVal = 1LL << i;
        int x_bit = (X >> i) & 1;
        int y_bit = (Y >> i) & 1;

        for (int tx = 0; tx < 3; ++tx) {
            for (int ty = 0; ty < 3; ++ty) {
                if (dp[i + 1][tx][ty] == INF) continue;
                for (int m = 0; m < 3; ++m) {
                    int u = moves[m][0];
                    int v = moves[m][1];
                   int ntx = tx;
                    int nty = ty;
                    if (tx == 1) {
                        if (u < x_bit) ntx = 0;  
                        else if (u > x_bit) ntx = 2; 
                    }
                    if (ty == 1) {
                        if (v < y_bit) nty = 0;     
                        else if (v > y_bit) nty = 2;
                    }
                    ll current_cost = 0;
                    if (ntx == 0) current_cost += (x_bit - u) * bitVal;
                    if (ntx == 2) current_cost += (u - x_bit) * bitVal;
                    if (nty == 0) current_cost += (y_bit - v) * bitVal;
                    if (nty == 2) current_cost += (v - y_bit) * bitVal;

                    if (dp[i + 1][tx][ty] + current_cost < dp[i][ntx][nty]) {
                        dp[i][ntx][nty] = dp[i + 1][tx][ty] + current_cost;
                        path[i][ntx][nty] = (tx * 3 + ty) * 4 + m;
                    }
                }
            }
        }
    }
    int best_tx = 0, best_ty = 0;
    ll min_cost = INF;
    for (int j = 0; j < 3; ++j) {
        for (int k = 0; k < 3; ++k) {
            if (dp[0][j][k] < min_cost) {
                min_cost = dp[0][j][k];
                best_tx = j;
                best_ty = k;
            }
        }
    }
    ll P = 0, Q = 0;
    for (int i = 0; i <= 30; ++i) {
        int info = path[i][best_tx][best_ty];
        int m = info % 4;
        int prev_state = info / 4;
        
        if (moves[m][0]) P |= (1LL << i);
        if (moves[m][1]) Q |= (1LL << i);

        best_tx = prev_state / 3;
        best_ty = prev_state % 3;
    }

    cout << P << " " << Q << "\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; 
    cin >> t;
    while (t--) solve();
    return 0;
}