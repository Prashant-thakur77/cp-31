#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int cnta=0;
    int cntb=0;
    for(int i=0;i<n;i++){
      if(a[i]=='1')cnta++;
      if(b[i]=='1')cntb++;
    }
    if(cnta!=cntb){
      cout<<"no"<<endl;
      return;
    }
    vector<ll> presum(n+1,0);
    presum[0]=0;
    int cnt=0;
    for(int i=1;i<=n;i++){
      if(a[i-1]=='1'){
        cnt++;

      }
      presum[i]=cnt;
    }
    int flag=0;
    for(int i=n-1;i>=0;i--){

      if(a[i]!=b[i] && flag==0){
         if((i+1)%2==0 && (i+1)/2==presum[i+1]){
          flag=1;

         }
         else{
          cout<<"no"<<endl;
          return;
         }
         
        
      }
      else if(a[i]==b[i] && flag==1){
         if((i+1)%2==0 && (i+1)/2==presum[i+1]){
          flag=0;

         }
         else{
          cout<<"no"<<endl;
          return;
         }
        
      }
     
    }
    cout<<"yes"<<endl;
    return;
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}