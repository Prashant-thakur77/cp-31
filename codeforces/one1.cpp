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
    vector<int> v(n,-1);
    v[n-1]=n;
    int no=1;
    for(int i=n-2;i>=0;i-=2){
      v[i]=no;
      no++;

    }
    for(int i=0;i<n;i++){
      if(v[i]==-1){
        v[i]=no;
        no++;
      }
    }
    for(int i=0;i<n;i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;
    

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}