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
    ll n,k;
    cin>>n>>k;
    vector<int> v(n);
    ll sum=0;
    for(int i=0;i<n;i++){
      cin>>v[i];
      sum+=v[i];
    }
    if(sum%2==1){
      cout<<"yes"<<endl;
    }
    else{
      if(k%2==0){
        cout<<"yes"<<endl;
      }
      else if(n%2==0 && k%2==1){
        cout<<"yes"<<endl;

      }
      else{
        cout<<"no"<<endl;
      }
    }

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}