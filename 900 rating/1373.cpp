#include<bits/stdc++.h>
using namespace std;

  
  

 int main(){
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int n=s.length();
      int cnt1=0;
      int cnt0=0;
      for(int i=0;i<n;i++){
        if(s[i]=='1') cnt1++;
        else cnt0++;
      }
      int cnt=min(cnt0,cnt1);
      if(cnt%2==0){
        cout<<"NET"<<endl;

      }
      else{
        cout<<"DA"<<endl;
      }

        
    }
    return 0;
 }
       