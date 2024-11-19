#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      int i;
      string s;
      cin>>s;
      int n=s.size();
      int zero=0;int one=0;
     
      for(int i=0;i<n;i++){
        if(s[i]=='1') one++;
        else zero++;
      }
   
      int ans;
      for(i=0;i<n;i++){
        if(s[i]=='1'){
          if(zero==0){
            break;
            
          }
          else zero--;
          
          
          
        }
        else {
          if(one==0){
            break;
            
          }
          else one--;
          
          
        }
        
      }
      cout<<n-i<<endl;
    

                            
      
    }
    return 0;
 }