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
    ll n,k1,k2;
    cin>>n>>k1>>k2;
    vector<ll> v1(n);
    vector<ll> v2(n);
    for(int i=0;i<n;i++){
      cin>>v1[i];
    }
    for(int i=0;i<n;i++){
      cin>>v2[i];
    }
    ll maxi=0;
    vector<ll> diff(n,0);
    ll sum2=0;
    for(int i=0;i<n;i++){
      diff[i]=abs(v1[i]-v2[i]);
      sum2+=(diff[i]*diff[i]);
      maxi=max(maxi,diff[i]);
    }
   
    vector<ll> cnt(maxi+1,0);
    
    for(int i=0;i<n;i++){
      cnt[diff[i]]++;

    }

    vector<ll> pre(maxi+1,0);
    pre[maxi]=cnt[maxi];
    for(int i=maxi-1;i>=0;i--){
      pre[i]=cnt[i]+pre[i+1];
    }
    ll m=k1+k2;
    int j=maxi;
    ll sum=0;
    while(m>0 && j>0){
      if(m>=pre[j]){
        m-=pre[j];
        sum+=(pre[j]*(2*j-1));

      }
      else{
        sum+=(m*(2*j-1));
        m=0;
        break;
      }
      j--;

    }
    if(m==0){
       cout<<sum2-sum<<endl;

    }
    else{
      if(m%2==0){
        cout<<0<<endl;
      }
      else{
        cout<<1<<endl;
      }

    }

}

int32_t main() {
    fast_io;
     solve();
    return 0;
}