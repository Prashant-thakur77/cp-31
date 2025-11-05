#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
        
        vector<long long> a(n);
        long long tot = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            tot += a[i];
        }
        
        sort(a.begin(), a.end());
        
        vector<long long> r;
        long long s = 0;
        long long b = 0;
        
        int l = 0, h = n - 1;
        
        while (l <= h) {
            long long c = s / x;
            long long nt = (c + 1) * x;
            long long nd = nt - s;
            
            if (h >= l && a[h] >= nd) {
                r.push_back(a[h]);
                s += a[h];
                b += a[h];
                h--;
            } else {
                long long sr = 0;
                for (int i = l; i <= h; i++) {
                    sr += a[i];
                }
                
                if (s + sr < nt) {
                    while (l <= h) {
                        r.push_back(a[l]);
                        s += a[l];
                        l++;
                    }
                } else {
                    while (l <= h && s + a[l] < nt) {
                        r.push_back(a[l]);
                        s += a[l];
                        l++;
                    }
                    
                    if (l <= h) {
                        r.push_back(a[h]);
                        s += a[h];
                        b += a[h];
                        h--;
                    }
                }
            }
        }
        
        cout << b << "\n";
        for (int i = 0; i < n; i++) {
            cout << r[i];
            if (i < n - 1) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}