#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
    
        set<int> s(a.begin(), a.end());
        vector<int> vals(s.begin(), s.end());
        map<int, int> comp;
        for (int i = 0; i < (int)vals.size(); i++) {
            comp[vals[i]] = i;
        }
        for (int i = 0; i < n; i++) {
            a[i] = comp[a[i]];
        }
        
        int m = vals.size();
        
        map<int, int> dp;
        dp[0] = 0;
        
        for (int i = 0; i < n; i++) {
            map<int, int> ndp;
            
            for (map<int, int>::iterator it = dp.begin(); it != dp.end(); ++it) {
                int mask = it->first;
                int cost = it->second;
                
               
                if (ndp.find(mask) == ndp.end() || ndp[mask] > cost + 1) {
                    ndp[mask] = cost + 1;
                }
                
              
                bool ok = true;
                for (int j = 0; j < m; j++) {
                    if ((mask >> j) & 1) {
                        if (vals[a[i]] == vals[j] + 1) {
                            ok = false;
                            break;
                        }
                    }
                }
                
                if (ok) {
                    int nmask = mask | (1 << a[i]);
                    if (ndp.find(nmask) == ndp.end() || ndp[nmask] > cost) {
                        ndp[nmask] = cost;
                    }
                }
            }
            
            dp = ndp;
        }
        
        int ans = n;
        for (map<int, int>::iterator it = dp.begin(); it != dp.end(); ++it) {
            ans = min(ans, it->second);
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}