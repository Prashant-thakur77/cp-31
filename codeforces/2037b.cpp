#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      int ans2=0;
     
      int ans1=0;
      

      vector<int> v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
     
      
      for(int i=0;i<n-1;i++){
        if(v[i]>n-2) continue;
        for(int j=i+1;j<n;j++){
          if(v[i]*v[j]==n-2){
            ans1=v[i];
            ans2=v[j];
            break;
          }

        }
        
       
        
        }
        
         //cout<<cnt<<endl;
        
        
       
          
       
      
    
      cout<<ans1<<" "<<ans2<<endl;
      
    }
    
    return 0;
 }
