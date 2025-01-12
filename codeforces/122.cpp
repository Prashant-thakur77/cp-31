#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      long long n;
      cin>>n;
      vector<int> v(n);
      vector<int> w(n);
      for(int i=0;i<n;i++){
        cin>>v[i];

      }
      for(int i=0;i<n;i++){
        cin>>w[i];
        
      }
      vector<int> ans(n);
      int cnt=0;
      int cnt0=0;
      int ind=0;
      for(int i=0;i<n;i++){
        
        ans[i]=v[i]-w[i];
        //cout<<ans[i]<<endl;
        if(ans[i]==0)cnt0++;
        else if(ans[i]<0){
          cnt++;
          ind=i;
          
        }
        
      }
      if(cnt>1||cnt==1&&cnt0==n-1)cout<<"no"<<endl;
      else{
        int mini=INT_MAX;
        int anss=abs(ans[ind]);
       // cout<<anss<<endl;
        for(int i=0;i<n;i++){
          if(i==ind)continue;
          else{
            mini=min(mini,ans[i]);
            
          }
          
        }
        //cout<<mini<<endl;
        if(mini>=anss)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        


      }
      
      


      
    }
 }
