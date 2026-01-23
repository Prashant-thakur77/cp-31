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
    string s;
    cin>>s;

    vector<int> freq(10, 0);
    for(char c:s) {
        freq[c-'0']++;
    }

    for(int i=0; i<10;i++) {
        for (int d=9-i; d<=9; d++) {
            if (freq[d]>0) {
                cout<<d;
                freq[d]--;
                break;
            }
        }
    }
    cout<<'\n';

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}