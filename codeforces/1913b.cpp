#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      long long n;
      int k;
      cin>>n;
      vector<int> v(n);
      k=n/2;
      int flag=0;
      if(n<5){
        flag=-1;
      }
      else{
        
        int even=0;
        v[k]=5;
        v[k-1]=4;
        for(int i=2;i<=n;i=i+2){
          if(i==4){
            
            continue;
          }
          else{
            v[even]=i;
            even++;
            
          }

        }
         even=even+2;
        for(int i=1;i<=n;i=i+2){
          if(i==5){
            
            continue;
          }
          else{
            v[even]=i;
            even++;
            
          }

        }
      


      }
      if(flag==-1){
        cout<<-1<<endl;
      }
      else{
        for(int i=0;i<n;i++){
          cout<<v[i]<<" ";
        }
        cout<<endl;
      }


      
      
    }
    
    return 0;
 }
