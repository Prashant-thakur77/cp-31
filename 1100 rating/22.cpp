#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1000000007;

ll modpow(ll base, ll exp) {
    ll res = 1;
    while (exp) {
        if (exp & 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}

void solve() {
    ll n;
    cin >> n;

    ll inv3 = modpow(3, MOD - 2); // modular inverse of 3
    ll inv6 = modpow(6, MOD - 2); // modular inverse of 6

    ll a = n % MOD;
    ll b = (n + 1) % MOD;
    ll c = (n - 1 + MOD) % MOD;
    ll d = (2 * n + 1) % MOD;

    // First term: n*(n+1)*(n-1)/3
    ll term1 = (((a * b) % MOD) * c) % MOD;
    term1 = (term1 * inv3) % MOD;

    // Second term: n*(n+1)*(2n+1)/6
    ll term2 = (((a * b) % MOD) * d) % MOD;
    term2 = (term2 * inv6) % MOD;

    // Final sum
    ll Sfinal = (term1 + term2)*2022LL % MOD;

    cout << Sfinal << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
