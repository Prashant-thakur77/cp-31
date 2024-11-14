#include<bits/stdc++.h>
using namespace std;
size_t findid(string &s,string &con1,string &con2){
  size_t g=s.find(con1);
  size_t l=s.find(con2);
  if(g!=string::npos){
    return g;

  }
  else if(l!=string::npos){
    return l;
  }
  else return -5;
  
  
}
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
       