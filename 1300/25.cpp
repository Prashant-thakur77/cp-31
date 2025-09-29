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
    vector<int> v(n);
    vector<int> w(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    for(int i=0;i<n;i++){
      cin>>w[i];
    }
    map<int,int> mp;
    for(int i=0;i<n;i++){
      mp[w[i]]=i+1;
    }
    int maxi=1;
    int cnt=0;
    for(int i=0;i<n;i++){
      if(mp[v[i]]<maxi){
        cnt++;
      }
      maxi=max(maxi,mp[v[i]]);
    }
    cout<<cnt<<endl;
    return;

}

int32_t main() {
    solve();
    return 0;
}