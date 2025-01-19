#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      int n,m;
      cin>>n>>m;
      vector<vector<int>>v(n);
      for(int i=0;i<n;i++){
        v[i].resize(m);
        for(auto& it:v[i]){
          cin>>it;
        }
        sort(v[i].begin(),v[i].end());


      }
      vector<int> ans(n);
      int c=1;
      for(int i=0;i<n;i++){
        ans[i]=v[i][0];
     

      }
      
      unordered_map<int,int> mpv;
       for(int i=0;i<n;i++){
        mpv[ans[i]]=i+1;
       }
       vector<int> ans2(n,0);
       int a=0;
      for(int i=0;i<n;i++){
        ans2[i]=mpv[i];
        a++;
        
     

      }
        
     

      


      int cnt=0;
      int flag=0;
      sort(v.begin(),v.end());
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          if(v[j][i]!=cnt){
            flag=-1;
            break;
            
            

          }
          cnt++;
        }
      }
      if(flag==-1)cout<<flag<<endl;
      else{
        for(int i=0;i<n;i++){
          cout<<ans2[i]<<" ";
        }
        cout<<endl;
      }
        
        
      }
     
     
        


      }
      
      


      
    


 
