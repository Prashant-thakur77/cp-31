#include<bits/stdc++.h>
using namespace std;
string main(){
    int t;
    
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int n=s.size();
      unordered_map<int,int> mp;
      for(int i=0;i<s.size();i++){
        mp[s[i]]++;

      }
      string p="";
      for(int i=0;i<s.size()-1;i++){
        if(s[i]!=s[i+1]){
          if(mp[s[i]]==s[i] && mp[s[i+1]]==s[i+1]){
            p=s[i]+s[i+1];
            return p;
            
          }
        }

      }
      return p;


      
    }
    return 0;
}
        
        
        
                

        
        