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
    ll k;
    cin>>k;
    vector<int> v(n);
     map<int,int> mp;
    for(int i=0;i<n;i++){
      cin>>v[i];
      mp[v[i]]++;
    }
   
    set<int> st(v.begin(),v.end());
    sort(all(v));
    int mis=0;
    for(auto &it:st){
      if(mis==it){
        mis++;
      }
      else break;

    }
    vector<ll> ans(n,-1);
    ll ans1=0;
    for(int i=0;i<n;i++){
      if(v[i]>mis){
        if(k%2==0){
          ans[i]=mis+1;
          ans1+=ans[i];
        }
        else {
          ans[i]=mis;
          ans1+=ans[i];
        }
      }
      else {
        if(k%2==1){
          

        }
        
        
      }
    }
    cout<<mis<<endl;
    cout<<ans1<<endl;
    

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}