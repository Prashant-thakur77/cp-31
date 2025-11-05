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
    string s;
    cin>>s;
    vector<int> v;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
      if(s[i]=='1'){
        v.push_back(i+1);
        ans[i]=i+1;
    }
  }
  v.push_back(n);
    s="1"+s+"1";
    //cout<<s<<endl;
    int k=s.size();
    int mini=0;
    int cnt=0;
    for(int i=0;i<k-1;i++){
      if(s[i+1]=='0'){
        cnt++;
       // cout<<"cnt "<<cnt<<endl;
      }
      else{
       if(cnt==1){
        cout<<"no"<<endl;
        return;
       }
       cnt=0;

      }
      
      
      
    }
    int l=0;
    int m=v[l];
    for(int i=0;i<n;i++){
      

      if(ans[i]==0 ){
        if(m==n){
          //cout<<i<<endl;
        
        while(i<n){
         // cout<<i<<endl;
          ans[i]=m;
          //cout<<ans[i]<<endl;
          m--;
          i++;
         }
         break;
        }
        m--;
        ans[i]=m;
        


      }
      else{
        l++;
        m=v[l];
      }
        
      }
      cout<<"yes"<<endl;
      for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
      }
      cout<<endl;
      return;

    

    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}