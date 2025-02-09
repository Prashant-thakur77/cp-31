#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int n=s.size();
      string p="";
      for(int i=0;i<n-2;i++){
        p+=s[i];

      }
      p+="i";
      cout<<p<<endl;
     
    }
    return 0;
    
 }
