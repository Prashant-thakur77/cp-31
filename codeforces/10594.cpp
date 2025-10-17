#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll query1(int l, int r) {
    cout << "1 " << l << " " << r << endl;
    cout.flush();
    ll x;
    cin >> x;
    return x;
}

ll query2(int l, int r) {
    cout << "2 " << l << " " << r << endl;
    cout.flush();
    ll y;
    cin >> y;
    return y;
}

void answer(int l, int r) {
    cout << "! " << l << " " << r << endl;
    cout.flush();
}

void solve() {
    int n;
    cin >> n;
    
    ll sum_p = query1(1, n);
    ll sum_a = query2(1, n);
    
    if (sum_p == sum_a) {
        answer(1, 1);
        return;
    }
    
    int left = 1, right = n;
    int found_l = 1;
    
    while (left < right) {
        int mid = (left + right) / 2;
        ll p_sum = query1(1, mid);
        ll a_sum = query2(1, mid);
        
        if (p_sum == a_sum) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    
    found_l = left;
    
    left = found_l;
    right = n;
    
    while (left < right) {
        int mid = (left + right + 1) / 2;
        ll p_sum = query1(found_l, mid);
        ll a_sum = query2(found_l, mid);
        
        if (p_sum != a_sum) {
            left = mid;
        } else {
            right = mid - 1;
        }
    }
    
    answer(found_l, left);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}