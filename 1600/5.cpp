#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
bool check(int mid,vector<int>chn,vector<pair<int,int>> v,int n){
  vector<int> a(n,0);
  for(int i=0;i<mid;i++){
    a[chn[i]]=1;
  }
  for(int i=1;i<n;i++){
    a[i]+=a[i-1];
  }
  for(auto& it:v){
    int l=it.first;
    int r=it.second;
    int sum=a[r]-((l>0)?a[l-1]:0);
    if(sum>(r-l+1)/2)return true;
  }
  return false;

}

void solve() {
    // Your code here
    ll n,m;
    cin>>n>>m;
    vector<pair<int,int>> v(m);
    for(int i=0;i<m;i++){
      ll a,b;
      cin>>a>>b;
      a--;
      b--;
      v[i]={a,b};

    }
    ll q;
    cin>>q;

    vector<int> chn;
    for(int i=0;i<q;i++){
      ll no;
      cin>>no;
      no--;
      chn.push_back(no);

    }
    int l=0;
    int h=q;
    int ans=INT_MAX;
    while(l<=h){
      int mid=(l+h)/2;
      if(check(mid,chn,v,n)){
        ans=min(ans,mid);
        h=mid-1;
      }
      else{
        l=mid+1;
      }
    }
    if(ans==INT_MAX){
      cout<<-1<<endl;
    }
    else cout<<ans<<endl;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}