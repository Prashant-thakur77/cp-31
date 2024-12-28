#include<bits/stdc++.h>
using namespace std;
 int main(){
   long long t;
    cin>>t;
    
    while(t--){
      long long n;
      cin>>n;
      vector<pair<int,int>> v(n);
      
      for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;

        

      }
      map<int,int> mp;
      for(int i=0;i<n;i++){
        if(v[i].first==v[i].second){
          mp[v[i].first]++;
        }

        

      }
     
      vector<int> k(n,0);

      for(int i=0;i<n;i++){
        if(v[i].first==v[i].second && mp[v[i].first]>0 && mp[v[i].first]<=1){
          k[i]=1;
          
        }
        
        else{
          for(int j=v[i].second;j>=v[i].first;j--){
            if(mp[j]<1){
              k[i]=1;
              break;
            }
          }
        }
        

        

      }
      for(int i=0;i<n;i++){
        cout<<k[i];

        

      }
      cout<<endl;
      

      
      



          
    
    }
    
    
    return 0;
 }
