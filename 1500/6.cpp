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
    string s;
    cin>>s;
    ll q;
    cin>>q;
    int mini=0;
      int maxi=0;
      for(int i=0;i<n;i++){
        if(s[i]=='+') mini++;
        else maxi++;
      }
      if(mini>maxi){
        ll temp=mini;
        mini=maxi;
        maxi=temp;
      }
      vector<pair<ll,ll>> v;
      
      for(int i=0;i<min(mini,maxi);i++){
        ll tempmin=mini-i;
        ll tempmax=maxi-i;
        v.push_back({tempmin,tempmax});




      }
    for(int i=0;i<q;i++){
      ll a,b;
      ll larg;
      ll small;
      cin>>a>>b;
      if(mini==maxi){
        cout<<"yes"<<endl;
        continue;
      }
      if(a>b){
        larg=a;
        small=b;

        
      }
      else {
        larg=b;
        small=a;
      }
      
      int check=0;
      for(int i=0;i<v.size();i++){
        if(small*v[i].second==larg*v[i].first){
          check=1;
          break;

        }
      }
      if(check==1)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}

int32_t main() {
    fast_io;
    solve();
    return 0;
}