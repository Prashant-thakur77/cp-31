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
    string s;
    cin>>s;
    int n=s.size();
    ll cnt=0;
 
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
      if(s[i]=='s'){
        v[i]=1;
      }
    }
    for(int i=0;i<n;i++){
      cnt+=v[i];
    }
    ll cnt2=0;
    v[0]=1;
    v[n-1]=1;
    for(int i=1;i<n-1;i++){
      if(v[i]==0){
        if(v[i+1]!=1){
          v[i+1]=1;
        }
      }
    }
    for(int i=0;i<n;i++){
      cnt2+=v[i];
    }
    //cout<<cnt2<<endl;
    //cout<<cnt<<endl;
    cout<<cnt2-cnt<<endl;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}