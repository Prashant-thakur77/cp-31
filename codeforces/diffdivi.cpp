#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int d;
    cin>>d;
    
    int flag=0;
    int b=1+d;
    int notprime=0;
    int no1=-1;
    int no2=-1;
    while(no1==-1){
      
      
      
       
      for(int i=2;i<=b/2;i++){
        if(b%i==0){
          notprime=-1;
          break;
        }
        
      }
      if(notprime==-1){
        b++;
        notprime=0;
       
        

      }
      else{
        no1=b;
        break;

      }
      

    }
    b=b+d;
    int notprime2=0;
    while(no2==-1){
      
      
      
       
      for(int i=2;i<=b/2;i++){
        if(b%i==0){
          notprime2=-1;
          break;
        }
      }
      if(notprime2==-1){
        b++;
        notprime2=0;
        

      }
      else{
        no2=b;
        break;

      }
      

      }
      cout<<no1*no2<<endl;
    
  }
  return 0;

}