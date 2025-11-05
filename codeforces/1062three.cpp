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
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    bool check1=false;
    bool check2=false;
    for(int i=0;i<n;i++){
      if(v[i]%2==0){
        check1=true;

      }
      else{
        check2=true;

      }
    }
    if((check1 & check2)==0){
      for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
      }
      cout<<endl;
      return;

    }
    else {
      sort(all(v));
      for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
      }
      cout<<endl;


    }
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}