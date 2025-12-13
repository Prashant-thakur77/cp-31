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
    vector<int> w(n+1,0);
    for(int i=0;i<n;i++){
      w[v[i]]++;
    }
    sort(rall(w));
    int cnt=w[0];
    int maxi=w[0]-1;
    for(int i=1;i<n;i++){
      if(maxi<=0)break;
      if(w[i]>=maxi){
        cnt+=maxi;
        maxi--;
      }
      else{
        cnt+=w[i];
        maxi=w[i]-1;
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