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
    ll pos;
    cin>>s>>pos;
    --pos;
    int n=s.size();
    vector<char> st;
    bool ok=pos<n;

    s+='%';
    for(auto c: s){
      while(!ok && st.size()>0 && st.back()>c){
        pos-=n;
        --n;
        st.pop_back();
        if(pos<n){
          ok=true;
        }
      }
      st.push_back(c);
    }
    cout<<st[pos];
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}