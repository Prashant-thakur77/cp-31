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
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll sum=0;
    ll largest=-1;
    for(int i=0;i<n;i++){
      cin>>v[i];
      sum+=v[i];
      largest=max(largest,v[i]);
    }
    ll nextsum=sum-largest;
    if(sum%2==0 && nextsum>=largest){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
    


}

int32_t main() {
    fast_io;
    solve();
    return 0;
}