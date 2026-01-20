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
    string s;
    cin>>s;
    int n=s.size();
    vector<int> v;
    for(int i=0;i<n;i++){
      if(s[i]=='a'){
        v.push_back(0);
      }
      else if(s[i]=='b'){
        v.push_back(1);
      }
    }
    int k=v.size();
    ll ans=1;
    ll sum=0;
    for(int i=0;i<k;i++){
      if(v[i]==0){
        sum++;
      }
      else{
        ans=(ans*(sum+1))%mod;
        sum=0;
      }

    }
    if(sum!=0){
      ans=(ans*(sum+1))%mod;
    }
    cout<<ans-1<<endl;


}

int32_t main() {
    fast_io;
     solve();
    return 0;
}