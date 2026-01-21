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
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    sort(all(v));
    set<int> st(v.begin(),v.end());
    vector<int> vec(st.begin(),st.end());
    int k=vec.size();
    int cnt=1;
    int maxi=1;
    for(int i=1;i<k;i++){
      if(vec[i]==vec[i-1]+1){
        cnt++;
       // cout<<"hello  "<<cnt<<endl;

      }
      else{
        maxi=max(maxi,cnt);
       // cout<<"hello2  "<<maxi<<" "<<cnt<<endl;
        cnt=1;
      }
    }
    maxi=max(maxi,cnt);
    cout<<maxi<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}