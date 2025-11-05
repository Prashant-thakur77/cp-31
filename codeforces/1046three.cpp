#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

bool cmp(const array<int,3>&a, const array<int,3>&b){
    if(a[1]==b[1]) return a[0]<b[0];
    return a[1]<b[1];
}

void solve() {
    int n;
    cin>>n;

    vector<int> x(n);
    for(int i=0;i<n;i++){
      cin>>x[i];
    }

    vector<vector<int>> y(n+1);
     for(int i=0;i<n;i++){
       y[x[i]].push_back(i);
     }

    vector<array<int,3>> z;
    for (int v=1;v<=n;v++) {
        auto &p=y[v];
        int c=p.size();
        if (c<v) continue;
        for (int i=0;i+v-1<c;i++) {
            z.push_back({p[i],p[i+v-1],v});
        }
    }

    if (z.empty()) {
        cout<<0<<endl;
        return;
    }

    sort(z.begin(),z.end(),cmp);

    int m = z.size();
    vector<int> w(m);
    for(int i=0;i<m;i++) {
      w[i] = z[i][1];
    }

    vector<int> dp(m + 1);
    for (int i=1;i<=m;i++) {
        int s=z[i-1][0];
        int j=lower_bound(w.begin(), w.begin()+i-1,s)-w.begin();
        dp[i]=max(dp[i-1],dp[j]+z[i-1][2]);
    }

    cout<<dp[m]<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
