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
    ll n;
    cin>>n;
    vector<bool> vis(n+1,false);
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
      cin>>v[i];

    }
    ll cycles=0;
    ll cycles2=0;
    for(int i=1;i<=n;i++){
      if(!vis[i]){
        int len=0;
        int cur=i;
        while(!vis[cur]){
          vis[cur]=true;
          cur=v[cur];
          len++;
        }
        cycles++;
        if(len==2){
          cycles2++;
        }
      }
    }
    ll maxi=cycles;
    ll mini=cycles-cycles2+((cycles2>0)?1:0);
    cout<<mini<<" "<<maxi <<endl;
    return;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}