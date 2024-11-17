#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    
    while(t--){
      int k;
      cin>>k;
      int n=k-2;
      int ans2=0;
     
      int ans1=0;
      

      vector<int> v(k);
      for(int i=0;i<k;i++){
        cin>>v[i];
      }
       unordered_set<int> seen;
       pair<int,int> result;
     
      
      for(int i=0;i<k;i++){
       if(n%v[i]==0){
        int comp=n/v[i];
        if(seen.find(comp)!=seen.end()){
          result={v[i],comp};

        }
        
       }
       seen.insert(v[i]);
        
       
        
        }
        
  
        
        
       
          
       
      
    
      cout<<result.first<<" "<<result.second<<endl;
      
    }
    
    return 0;
 }
