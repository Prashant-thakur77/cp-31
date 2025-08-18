#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n;
    cin>>n;
    ll m=(n*(n-1))/2;
    vector<ll> v(m);
    for(int i=0;i<m;i++){
      cin>>v[i];
    }
    sort(all(v));
   /*vector<pair<ll,ll>> pai;
    pai.push_back({v[0],1});
    int cnt=0;
    for(int i=1;i<m;i++){

      if(v[i]!=v[i-1]){
        cnt++;
        pai.push_back({v[i],1});

      }
      else{
        pai[cnt].second++;
      }
    }
    
    vector<ll> ans;
    ll i=0;
    ll j=0;
    cnt=pai[0].second;
   // cout<<cnt<<endl;
    while(cnt){
      ans.push_back(pai[i].first);
      cnt=cnt-(n-j-1);
      j++;
      if(j>n-2){
        break;
      }
      
      
      if(cnt==0){
        i++;
        if(i>n-2){
          break;
        }
        
        
        cnt=pai[i].second;
      }

    }
    ans.push_back(1e9);
    for(int i=0;i<n;i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;*/
    int x=n-1;
    int i=0;
    while(x>0){
      cout<<v[i]<<" ";
      i+=x;
      x--;
    }
    cout<<1000000000<<endl;
    return;

    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}