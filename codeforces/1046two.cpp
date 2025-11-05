#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int cnt=0;
    int flag=0;
    for(int i=0;i<n;i++){
      if(s[i]=='1'){
        cnt++;
      if(cnt>=k){
        flag=1;
        break;
      }
    }
      else cnt=0;
    }
    if(flag==1){
      cout<<"no"<<endl;
      return;
    }
    vector<ll> ans(n,0);
    vector<ll> v1,v2;
    for(int i=0;i<n;i++){
      if(s[i]=='1')v1.push_back(i);
      else v2.push_back(i);

    }
    int no=n;
    for(auto & it:v2){
      ans[it]=no--;

    }
    for(auto & it:v1){
      ans[it]=no--;
    }
    cout<<"yes"<<endl;
    for(int i=0;i<n;i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;
    return;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}