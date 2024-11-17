#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      int cnt=0;
     
      int ans=0;
      

      vector<int> v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      sort(v.begin(),v.end());
      int beg=v[0];
      for(int i=0;i<n;i++){
        if(v[i]==beg){
          cnt++;
        }
       
        else{
          ans+=cnt/2;
          cnt=0;
          beg=v[i];
          cnt++;
        }
        
         //cout<<cnt<<endl;
        
        
       
          
       
      }
      ans+=cnt/2;
      cout<<ans<<endl;
      
    }
    
    return 0;
 }