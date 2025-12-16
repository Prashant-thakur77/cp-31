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
     int n,x;
        cin>>n>>x;

        int l=1e5,r=-1;
        for(int i=0;i<n;i++){
            int door;
            cin>>door;
            if(door==1){
                l=min(l,i);
                r=max(r,i);
            }
        }

        cout<<((r==-1||x>=r-l+1)?"YES":"NO")<<endl;
        return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}