#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  
  cin>>t;
  while(t--){
    long long n,x;
    cin>>n>>x;
    vector<long long> v(n);

    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    vector<pair<long long,long long>> ans;
    for(int i=0;i<n;i++){
      long long r=-x+v[i];
      long long l=x+v[i];
      ans.push_back({r,l});
      //cout<<ans[i].first<<"  "<<ans[i].second<<endl;
    }
    long long cnt=0;
    long long maxi=-1e9;
    long long mini=1e9;
    
    for(int i=1;i<n;i++){
      long long l1=ans[i-1].second;
      mini=min(mini,l1);
      long long r1=ans[i-1].first;
      maxi=max(maxi,r1);
      long long l2=ans[i].second;
      long long r2=ans[i].first;
      //cout<<"mini  "<<mini<<"  "<<"maxi  "<<maxi<<endl;
      if((l2<r1 || r2>l1) || (r2>mini || l2<maxi )){
        //cout<<"r2  "<<r2<<"  l2  "<<l2<<endl;
        cnt++;
        mini=l2;
        maxi=r2;
      }

    }
    cout<<cnt<<endl;
      
    
    
  }
  return 0;
}