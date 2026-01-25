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
    int n;
    cin>>n;
    vector<pair<ll,int>> v;
    for(int i=0;i<n;i++){
      ll a,b;
      cin>>a>>b;
      v.push_back({a,1});
      v.push_back({b+1,-1});

    
    }
    sort(all(v));
    ll maxi=0;
    for(int i=0;i<v.size();i++){
        maxi+=v[i].second;
        if(maxi>2){
            cout<<"no"<<endl;
            return;
        }

    }
   cout<<"yes"<<endl;
   return;

}

int32_t main() {
    fast_io;
    solve();
    return 0;
}