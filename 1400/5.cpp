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
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    v[0]=1;
    vector<int> w(n);
    for(int i=1;i<n;i++){
      cin>>v[i];
    }
    for(int i=0;i<n;i++){
      cin>>w[i];
    }
    sort(all(v));
    sort(all(w));
    int end=n-1;
    int start1=0;
    int start2=0;
    int cnt=0;
    while(start2<n){
      if(w[start2]==1){
        end--;
        start2++;
      }
      else if(w[start2]<=v[start1]){
        start2++;
      }
      else if(w[start2]>v[start1]){
        start2++;
        start1++;
        cnt++;
      }

    }
    cout<<n-cnt<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}