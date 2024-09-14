#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      long long n,m,o;
      cin>>n>>m>>o;
      vector<long long> v(m);
      
      

      for(int i=0;i<m;i++){
        cin>>v[i];
        
      }
     for(int i=0;i<m;i++){
            int j=i;
            while(j>0 && v[j]<v[j-1]){
            int temp=v[j-1];
            v[j-1]=v[j];
            v[j]=temp;
            j--;
            }
        }
      vector<long long> u(o);
      for(int i=0;i<o;i++){
        cin>>u[i];
       
      }
      
      
      for(int i=0;i<o;i++){
        if(m==1){
          if(u[i]<v[0]){
            cout<<v[0]-1<<endl;

          }
          else if(u[i]>v[0]){
            cout<<n-v[0]<<endl;
          }
        }
       for(int j=0;j<m-1;j++){
        if(u[i]<v[0]){
          
          cout<<v[0]-1<<endl;
          break;

        }
        else if(u[i]>v[m-1]){

          
          cout<<n-v[m-1]<<endl;
          break;
        }
        else if(u[i]>v[j] && u[i]<v[j+1]){
          
          cout<<(v[j+1]-v[j])/2<<endl;
          
          break;
        }
        

      }
    
    }
    }
    return 0;
 }