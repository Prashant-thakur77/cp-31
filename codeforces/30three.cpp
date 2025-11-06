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
    ll n,m;
    cin>>n>>m;
    vector<int> v1;
    for(int i=0;i<n;i++){
      ll k;
      cin>>k;
      v1.push_back(k);
    }


    multiset<ll> v;
    for(int i=0;i<n;i++){
      
      v.insert(v1[i]);
    }
    
    vector<ll> w(m);
    vector<ll> l(m);
    for(int i=0;i<m;i++){
      cin>>w[i];
    }
    for(int i=0;i<m;i++){
      cin>>l[i];
    }
    vector<pair<ll,ll>> notzero;
    vector<pair<ll,ll>> zero;
    for(int i=0;i<m;i++){
      if(l[i]==0){
        zero.push_back({w[i],0});
      }
      else notzero.push_back({w[i],l[i]});
    }
    int cnt=0;
    sort(all(zero));
    sort(all(notzero));
    for(auto &it : notzero){
      ll no=it.first;
      ll no2=it.second;
      auto find=v.lower_bound(no);
      if(find==v.end()){
        continue;

      }
      no=*find;
      v.erase(find);
      v.insert(max(no2,no+0LL));
      cnt++;
    }
    for(int i=0;i<zero.size();i++){
      ll no1=zero[i].first;
      ll no3=zero[i].second;
      auto find=v.lower_bound(no1);
      if(find==v.end()){
        continue;
      }
      ll no=*find;
      v.erase(find);
      
      cnt++;

      

    }
    cout<<cnt<<endl;
    return;


}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}