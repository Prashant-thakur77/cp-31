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
          if(zero>0){
            zero--;
            
          }
          else
          break;
          
          
        }
        else {
          if(one>0){
            one--;
            
          }
          else
          break;
          
        }
        
      }
      cout<<n-i<<endl;
    

                            
      
    }
    return 0;
 }