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
    vector<vector<ll>> v(n);
    for(int i=0;i<n;i++){
      ll a,b;
      cin>>a>>b;
      v[i]={a,b,i};

    }
    vector<int> ans(n,0);
    ll check=0;
    sort(all(v));
    ll ending=v[0][1];
    ll ind=-1;
    ans[v[0][2]]=1;

  
    
    for(int i=1;i<n;i++){
      if(v[i][0]<=ending){
        ans[v[i][2]]=1;
        ending=max(ending,v[i][1]);
      }
      else{
        check=1;
        ans[v[i][2]]=2;
      }
      
     


    }
    if(check==0){
      cout<<-1<<endl;
      return;
    }
    else{
      for(int i=0;i<n;i++){
       cout<<ans[i]<<" ";

        
      }
      cout<<endl;
      return;

    }
    
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}