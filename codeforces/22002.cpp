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
    int n;
    cin>>n;
    string s;
    cin>>s;
    string k;
    for (int i = 0; 2*i < n; i++) {
        for (int j = 1; j <s.size(); j++) {
            if (s[j] == s[j-1]) {
                s.erase(j-1, 2);
            }
        }
    }
    cout << (s.empty() ? "YES\n" : "NO\n");
    



}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}