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
    ll n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    int i=0;
    int cnt=0;
    vector<int> v(n,0);
    int last=0;
    for(int i=0;i<n;i++){
      if(s[i]=='0'){
        v[i]=last;
      }
      else{
        v[i]=i;
        last=i;
      }
    }

    while(i<n){
      if(s[i]=='1'){
        i=i+k+1;
        continue;
      }
      else{
        if(i-v[i]>k|| v[i]==0){
           cnt++;


        }
       
        i++;
      }
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