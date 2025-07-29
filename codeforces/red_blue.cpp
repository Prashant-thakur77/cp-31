#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  
  cin>>t;
  while(t--){
    int n,r,b;
    cin>>n>>r>>b;
    int cnt=r/(b+1);
    string s="";
   
  
    int rem=r%(b+1);
    for(int i=0;i<b+1;i++){
     
      for(int j=0;j<cnt;j++){
        if(s.size()>=n)break;
        s+="R";
      }
      if(rem>0){
        s+="R";
        rem--;
      }
      if(s.size()>=n)break;
      s+="B";
    }
    cout<<s<<endl;
    
    
   
    
    
    
  }
  return 0;
}