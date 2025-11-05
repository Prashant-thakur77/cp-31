#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

void solve() {


    ll r,x,d,n;
    cin>>r>>x>>d>>n;
    string s;
    cin>>s;
    int cnt=0;
    ll cur=r;
    for(int i=0;i<n;i++){
      if(s[i]=='2'){
        if(cur<x){
          cnt++;
        }

      }
      else{
        cur=(cur-d)>0?cur-d:0;
        cnt++;
      }
      


    }
    cout<<cnt<<endl;
    


}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}