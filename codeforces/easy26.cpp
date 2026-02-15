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
    map<int,int> mpp;
    for(int i=0;i<n;i++){
      int no;
      cin>>no;
      mpp[no]=i;
    }
    int last=-1;
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    for(int i=0;i<n;i++){
      if(last>mpp[v[i]]){
        cout<<"no"<<endl;
        return;
      }
      last=mpp[v[i]];
    }
    cout<<"yes"<<endl;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}