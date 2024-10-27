#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    string x="66";
    string y="33";
    string z="36366";
    string w="3";
    while(t--){
      long long n;
      
      cin>>n;
    if(n==1 || n==3){
      cout<<-1<<endl;
    }
    
    else{
      if(n%2==0){
        for(int i=2;i<n;i=i+2){
          x=y+x;
        }
        cout<<x<<endl;

      }
      else if(n%2!=0){
         for(int i=5;i<n;i=i+2){
          
          z=y+z;
        }
        cout<<z<<endl;


      }
    }
    }
    
    return 0;
 }