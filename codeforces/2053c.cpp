#include<bits/stdc++.h>
using namespace std;
 int main(){
   long long t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
    
      int ans=0;
      for(int i=0;i<n-1;i++){
        if(v[i]+v[i]<=v[i+1]||v[i+1]+v[i+1]<=v[i]) ans=0;
        else{
          ans=1;
          break;
        } 

      }
      if(ans==1) cout<<"yes"<<endl;
      else cout<<"no"<<endl;


      
          
          
    
    }
    
    
    return 0;
 }
