#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      long long n;
      cin>>n;
      vector<long long> v(n);
      vector<long long> w(n);
      for(int i=0;i<n;i++){
        cin>>v[i];

      }
      for(int i=0;i<n;i++){
        cin>>w[i];
        
      }
      vector<int> ans(n);
      long long cnt=0;
      long long cnt0=0;
      long long ind=0;
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
        
        if(mini>=anss || cnt==0)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        


      }
      
      


      
    }
 }
