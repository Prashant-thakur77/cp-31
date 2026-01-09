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
    vector<pair<int,int>> pa;
    vector<vector<int>> v(n+1);
    for(int i=0;i<n-1;i++){
      ll a,b;
      cin>>a>>b;
      pa.push_back({a,b});
      v[a].push_back(b);
      v[b].push_back(a);

    }
    ll check=0;
    ll ind=-1;
    ll maxi=3;
    for(int i=1;i<=n;i++){
      if(v[i].size()>=maxi){

        check=1;
        ind=i;
        maxi=v[i].size();
      }
    }
    if(check==0){
      for(int i=0;i<n-1;i++){
        cout<<i<<endl;
      }
      return;
    }
    ll j=0;
    ll ini=maxi;
    for(int i=0;i<pa.size();i++){
      ll a=pa[i].first;
      ll b=pa[i].second;
      if(a==ind || b==ind && j<maxi){
        cout<<j<<endl;
        j++;
      }
      else {
        cout<<ini<<endl;
        ini++;
      }

    }
    
}

int32_t main() {
   solve();
    return 0;
}