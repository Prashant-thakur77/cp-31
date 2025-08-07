#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,x;
    cin>>n>>x;
    string s;
    cin>>s;
    
     int lastind=-1;
      int firstind=n;
      int ans=min(x,n-x+1);
      for(int i=x-1;i>=0;i--){
        if(s[i]=='#'){
          lastind=i;
          break;
        }
      }
      for(int i=x;i<n;i++){
        if(s[i]=='#'){
          firstind=i;
          break;
        }
      }
      //cout<<"firstind  "<<firstind<<endl;
     //cout<<"lastind  "<<lastind<<endl;
      
        int no1=lastind+2;
        int no2=n-firstind+1;
        int maxi=max(no1,no2);
        ans=min(ans,maxi);

       

        
        cout<<ans<<endl;


    
    
    

  }
  return 0;

}