#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
int ans[100000];

void solve() {
    // Your code here
    
    int n,m,k;
    cin>>n>>m>>k;
    
    vector<int> v(n);
    int y=0;
    for(int i=0;i<n;i++){
      cin>>v[i];
      ans[i]=v[i]-y-1;
      y=v[i];

    }
    if(k>=n){
      cout<<n<<endl;
      return;
    }
    sort(ans+1,ans+n);
    ll ans1=0;
    for(int i=1;i<=n-k;i++){
      ans1+=ans[i];

    }
    cout<<n+ans1<<endl;
    return;

    

}

int32_t main() {
    solve();
    return 0;
}