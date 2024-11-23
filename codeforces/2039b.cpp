#include<bits/stdc++.h>
using namespace std;
 int main(){
   long long t;
    cin>>t;
    
    while(t--){
      string s;
      cin>>s;
      int left=0;
        int right=0;
        int flg=0;
      long long n=s.size();
      if(n==1){
        cout<<-1<<endl;
      }
      else if(n==2){
        if(s[0]==s[1]){
          cout<<s<<endl;
        }
      else cout<<-1<<endl;
      }
       else if(n==3){
            if(s[0]==s[1]==s[2]){
              cout<<s<<endl;
            }
            else if(s[0]==s[2]){
              cout<<-1<<endl;
            }
            else if(s[0]==s[1]) cout<<s[0]+s[1]<<endl;
            else cout<<s[1]+s[2]<<endl;

          }
          
      else{
        
        for(int i=0;i<n-2;i++){
          if(s[i]!=s[i+1]!=s[i+2]){
            left=i;
            right=i+2;
            flg=1;
            break;

          }
          else if(s[i]==s[i+1]){
            left=i;
            right=i+2;
            flg=1;
            break;

          }
          else if(s[i]==s[i+2] && s[i]==s[i+1] ){
            left=i;
            
            right=i+3;
            flg=1;
            break;

          }
          
         
        }
        
      

      
    }
    if(flg==1){
      for(int i=left;i<=right;i++){
          cout<<s[i];
        }
        cout<<endl;

    }
    }
    
    
    return 0;
 }
