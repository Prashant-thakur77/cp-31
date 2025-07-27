#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  
  cin>>t;
  while(t--){
    long long n,k,b,s;
    cin>>n>>k>>b>>s;
    vector<long long> beauty(n,0);
    long long lowCond=k*b;
    long long upperCond=(n-1)*(k-1)+(k*b)+k-1;
    int flag=0;
    if(s<lowCond || s>upperCond){
       cout<<-1<<endl;
       flag=1;
       
    }
    if(flag==0){
      long long cursum=0;
    
    for(int i=0;i<n;i++){
          
          if(i==0){

            beauty[i]=(k*b);
            cursum+=beauty[i];
            if(s-cursum>=k-1){
              cursum+=k-1;
              beauty[i]+=k-1;
            }
            else{
              
              beauty[i]+=s-cursum;
              cursum=s;

            }
            continue;
          }
          if(s-cursum<k-1){
              beauty[i]=s-cursum;
              cursum+=beauty[i];
              break;


          }
          
          beauty[i]=k-1;
          
          
          cursum+=beauty[i];
    }
    
    for(int i=0;i<n;i++){
          cout<<beauty[i]<<" ";

      }
    cout<<endl;
        


  }
    
    
      
      
      
    
    
  }
  return 0;
}