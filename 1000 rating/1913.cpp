#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int n=s.size();
      cout<<n<<endl;
      long long l=0;
      long long m=0;
         int ans=min(l,m);
      for(int i=0;i<n;i++){
        if(s[i]=='1'){
          l++;
        }
        if(s[i]=='0'){
          m++;
        }

      }
      if(m==n){
        cout<<0<<endl;
      }
      else {
        cout<<n-ans<<endl;
      }
   

      



 
      




        
        
      
    }
      return 0;
    }