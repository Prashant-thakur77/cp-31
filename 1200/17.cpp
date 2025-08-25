#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007


int32_t main() {
    fast_io;
  ll n,q;
  ll sum=0;
  cin>>n>>q;
vector<pair<int,int>> v(n,{0,0});
  
  for(int i=0;i<n;i++){
    cin>>v[i].first;
    sum+=v[i].first;
    
  }
  pair<int,int> p={0,-1};
  int flag=0;
  int cnt=0;
  for(int it=1;it<=q;it++){
    
    int t;
    cin>>t;
    if(t==1){
      int i,x;
      cin>>i>>x;
      i--;
      /*  for(int i=0;i<n;i++){
        //cout<<v[i]<<endl;
        
        
      }*/
     if(v[i].second>p.second){
      sum=sum-v[i].first+x;
     }
     else{
      sum=sum+x-p.first;
     }
     
    v[i].first=x;
    v[i].second=it;

      
      
      flag=0;
      
    }
    else{
      int x;
      cin>>x;
      p.first=x;
      p.second=it;
     
      
      sum=n*(long long)x;
      
    }
    cout<<sum<<endl;

  }
}