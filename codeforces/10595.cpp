#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> result;
    int next_val = 1;
    
    for (int i = 0; i < k; i++) {
        int last = result.empty() ? a[n - 1] : result.back();
       
        while (next_val == last) {
            next_val++;
            if (next_val > n) next_val = 1;
        }
        
        result.push_back(next_val);
        
        next_val++;
        if (next_val > n) next_val = 1;
    }
    
    for (int i = 0; i < k; i++) {
        cout << result[i];
        if (i < k - 1) cout << " ";
    }
    cout << "\n";
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}