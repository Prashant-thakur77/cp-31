#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
      long long n;
      cin>>n;
     
      
     
      int cnt=0;

      
      long long k;
      k=n;
     while(k%25!=0){
        
        k=k/10;
        cnt++;
       
       
      }
       
     
    
      

      
       cout<<cnt<<endl;
    }
    return 0;
}