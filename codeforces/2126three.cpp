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
    int k,n;
    cin>>n>>k;
    vector<ll> v(n);
    ll val;
    for(int i=0;i<n;i++){
      cin>>v[i];
      if(i+1==k){
         val=v[i];
      }
    }
    
    set<int> st(v.begin(),v.end());
    vector<int> ans;
    for(auto &it:st){
      ans.push_back(it);
    }
    ll ind=0;
    for(int i=0;i<ans.size();i++){
      if(ans[i]==val)ind=i;
    }
    ll strt=0;
    ll curenth=ans[ind];
    for(int i=ind;i<ans.size()-1;i++){
      //cout<<"strt:  "<<strt<<" "<<"curr:  "<<curenth<<endl;
      if(ans[i+1]-curenth<=curenth-strt){
        strt+=ans[i+1]-curenth;
        curenth=ans[i+1];
        
      }
      else {
        cout<<"no"<<endl;
        return;
      }

    }
    cout<<"yes"<<endl;
    return;

    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}