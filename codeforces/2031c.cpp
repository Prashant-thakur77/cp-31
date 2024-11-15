#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      long long n;
      long long k=n;
      cin>>n;
      int flag=1;
      if(n<26 && n%2!=0){
        flag=0;
        cout<<-1<<endl;
      }
      if(flag!=0){
        vector<int> v(n);
      if(n%2==0){
        int u=0;
        for(int i=0;i<n;i++){
          
          if(i%2==0) u++;
          v[i]=u;
          

        }
      }
      else if(n>26){
        v[0]=2;
          v[1]=1;
          v[17]=1;
          v[26]=1;
          int h=2;
          int cnt=0;
        for(int i=2;i<n;i++){
          
          if(i==4){
            v[i]=2;
          }
          else if(i==17 || i==26){
            continue;
          }
          else{
            
            if(cnt%2==0) h++;
            v[i]=h;
            cnt++;

          }
        }


      }

      
        for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
      }
      cout<<endl;

      

      }
      


      

      

    }
    
    return 0;
 }
