#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a;
    long long b;
    cin>>a>>b;
    int i=0;
    int flag=0;
    int cnt=0;
    int ans=INT_MAX;
    if(b>a){
      flag=1;
      ans=1;
    }
    if(b==a){
      ans=2;
      flag=1;
    }
    while(flag==0){
      int copy=a;
      
      if(b==1 && i==0){
        i++;
       
      }
      int div=b+i;
      if(div>a){
        cnt=1;
      }
      
      while((copy/div)!=0 && a!=b){
   
        
        copy=copy/div;
       //cout<<"copy   "<<copy<<endl;
        cnt++;
        //cout<<"cnt   "<<cnt<<endl;
        if(copy<div){
          cnt++;
          continue;
        }
      }
      int real=cnt+i;
      //cout<<"cnt2   "<<cnt<<endl;
    
      //cout<<" div"<<div<<endl;
      //cout<<" real"<<real<<endl;
      if(real>ans){
        flag==1;
        break;

      }
      ans=min(ans,real);
   
      cnt=0;
      i++;
    }
    cout<<ans<<endl;
  }
  return 0;

}