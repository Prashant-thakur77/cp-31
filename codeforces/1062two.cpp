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
    string s,t;
    cin>>s>>t;
    vector<int> v(27,0);
    vector<int> w(27,0);
    for(int i=0;i<n;i++){
      v[s[i]-'a']++;
      w[t[i]-'a']++;
    }
    for(int i=0;i<27;i++){
      if(v[i]!=w[i]){
        cout<<"NO"<<endl;
        return;
      }
    }
   cout<<"YES"<<endl;
        return;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}