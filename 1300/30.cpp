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
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    double sum=0;
    for(int i=0;i<n;i++){
      if(i<k){
        sum+=(i+1)*v[i];

      }
      else if(i>=n-k){
        sum+=(n-i)*v[i];
      }
      else{
        sum+=k*v[i];
      }
    }
    double no=n+1-k;
    cout<<sum<<" "<<no<<endl;
    double ans=(double)sum/no;
    cout<<fixed << setprecision(9)<<ans<<endl;
}

int32_t main() {
    solve();
    return 0;
}