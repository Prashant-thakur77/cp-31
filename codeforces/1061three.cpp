#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

void solve() {
    int n;
    cin >> n;
    vector<int> v(n+1), loc(n+1);
    
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
        loc[v[i]] = i;
    }
    
    auto can_operate = [&](int x) -> bool {
        return (loc[x+2] < loc[x] && loc[x+2] < loc[x+1]);
    };
    
    auto perform_op = [&](int x) {
        int p1 = loc[x], p2 = loc[x+1], p3 = loc[x+2];
        v[p3] -= 2;
        v[p1]++;
        v[p2]++;
        loc[x] = p3;
        loc[x+1] = p1;
        loc[x+2] = p2;
    };
    
    if(n >= 3) {
        int ops = 1;
        while(ops) {
            ops = 0;
            int limit = n - 2;
            for(int i = 1; i <= limit; i++) {
                if(can_operate(i)) {
                    perform_op(i);
                    ops = 1;
                }
            }
        }
    }
    
    vector<int> result;
    for(int i = 1; i <= n; i++) {
        result.pb(v[i]);
    }
    
    for(int i = 0; i < result.size(); i++) {
        if(i) cout << " ";
        cout << result[i];
    }
    cout << '\n';
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}