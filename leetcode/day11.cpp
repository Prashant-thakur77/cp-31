#include<bits/stdc++.h>
using namespace std;
 bool canConstruct(string s, int k) {
        int n=s.length();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int cntodd=0;
        for(auto& it:mp){
            if(it.second%2!=0) cntodd++;
        }
        if(k>=cntodd && k<=n)return true;
        else return false;
        
    }
int main(){
    int t;
    
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int k;
      cin>>k;
      bool ans=canConstruct(s,k);
      cout<<ans<<endl;

    }


      
            
            
  
}
        
        
        
                

        
        