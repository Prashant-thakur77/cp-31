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
    vector<pair<int,int>> v;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
      cin>>vec[i];
    }
    for(int i=0;i<k;i++){
      ll a,b;
      cin>>a>>b;
      v.push_back({a,b});
    }
    
    vector<int> cnt(n+1,0);
    for(int i=0;i<k;i++){
      ll a=v[i].first;
      ll b=v[i].second;
      cnt[a-1]+=1;
      cnt[b]+=-1;

    }
    ll cnt1=0;
    vector<ll> v1(n,0);
    for(int i=0;i<n;i++){
      cnt1+=cnt[i];
      v1[i]=cnt1;


      

    }
    sort(all(v1));
    sort(all(vec));
    ll sum=0;
    for(int i=n-1;i>=0;i--){
      sum+=v1[i]*vec[i];

    }

    cout<<sum<<endl;

}

int32_t main() {
    fast_io;
     solve();
    return 0;
}