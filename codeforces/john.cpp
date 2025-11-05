#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  
  cin>>t;
  while(t--){
    long long a,b;
    cin>>a>>b;
    int cnt1=0;
    int cnt2=0;
    while(a%2==0){
      a=a/2;
      cnt1++;//(no of 2 raise to x this is x)
    }
    while(b%2==0){
      b=b/2;
      cnt2++;//(no of 2 raise to x this is x)
    }
    if(a!=b)cout<<-1<<endl;
    else{
      if(cnt1==cnt2)cout<<0<<endl;
      else{
        int diff=abs(cnt2-cnt1);
        cout<<diff/3 + (diff%3!=0)<<endl;
      }
    }
      
      
    
    
  }
  return 0;
}