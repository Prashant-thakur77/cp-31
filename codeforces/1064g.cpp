
#include <bits/stdc++.h>
using namespace std;

bool good(int d, int n, int m, int k) {
  if (d == 0)
    return true;

  int L = max(0, d - (n - k));
  int R = min(d, k - 1);

  if (L > R)
    return false;

  if (L <= R) {
    int t1 = 2 * d - m - 1;
    int t2 = m + 1 - d;
    if (max(L, t1) > min(R, t2))
      return false;
    else
      return true;
  }

  return false;
}

void solve() {
  int n, m, k;
  cin >> n >> m >> k;

  int lo = 0, hi = min(n - 1, m), best = 0;
  while (lo <= hi) {
    int d = (lo + hi) / 2;
    if (good(d, n, m, k)) {
      lo   = d + 1;
      best = d;
    } else {
      hi = d - 1;
    }
  }

  cout << best + 1 << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
    solve();
}
