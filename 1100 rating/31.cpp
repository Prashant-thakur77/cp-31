#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    int n,m;
    cin>>n>>m;
    vector<int> v(51,n+1);
    for(int i=1;i<=n;i++){
      int x;
      cin>>x;
      if(v[x]==n+1){
        v[x]=i;
      }
    }
    while(m--){
      int a;
      cin>>a;
      int firstind=v[a];
      for(int i=1;i<=50;i++){
        if(v[i]<firstind)v[i]++;
      }
      v[a]=1;
      cout<<firstind<<" ";
    
    }
    cout<<endl;
    return;
    

}

int32_t main() {
    solve();
    return 0;
}