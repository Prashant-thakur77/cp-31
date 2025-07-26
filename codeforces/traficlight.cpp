#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;

  
  while(t--){
    int n;
    cin>>n;
    char c;
    cin>>c;
    
    
    string s;
    cin>>s;
    string f=s+s;
    
    if(c=='g'){
      cout<<0<<endl;
    }
    else{
      int ind1=-1;
      for(int i=0;i<n;i++){
          if(s[i]==c){
          ind1=i;
          break;

        }
      }
      int ind2=1;

      for(int i=0;i<n;i++){
        if(s[i]=='g'){
          ind2=i+n;
          break;

        }
      }
      //cout<<"ind1  "<<ind1<<endl;
      //cout<<"ind2  "<<ind2<<endl;
      

      int flag=0;
      int maxi=INT_MIN;
      int ind3=-1;
    
      for(int i=ind1;i<=ind2;i++){
        
        if(flag==0 && f[i]==c){
          ind3=i;
          flag=1;

        }
        else if(flag==1 && f[i]=='g'){
          int diff=i-ind3;
          maxi=max(maxi,diff);
          flag=0;
        }


      }

      cout<<maxi<<endl;

    }
    
      

      
      
      
        

    }
    return 0;
  }