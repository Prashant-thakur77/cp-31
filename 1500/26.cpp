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
    vector<int> visited(100001,0);
    ans[v[0][2]]=1;
  
    ll last1=v[0][1];
    ll last2=0;
    for(int i=1;i<n;i++){
     
      if(v[i][0]<=last1){
        ans[v[i][2]]=1;
        last1=max(last1,v[i][1]);
        

      }
      else{
        ans[v[i][2]]=2;
        

      }


    }
    set<int> st(ans.begin(),ans.end());
    if(st.size()==1){
      cout<<-1<<endl;
      return;
    }
    for(int i=0;i<n;i++){
      cout<<ans[i]<<" ";

      
    }
    cout<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}