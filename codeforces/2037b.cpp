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
       unordered_set<int> hello;
       pair<int,int> result;
     
      
      for(int i=0;i<k;i++){
       if(n%v[i]==0){
        int comp=n/v[i];
        if(hello.find(comp)!=hello.end()){
          result={v[i],comp};

        }
        
       }
       hello.insert(v[i]);
        
       
        
        }
        
  
        
        
       
          
       
      
    
      cout<<result.first<<" "<<result.second<<endl;
      
    }
    
    return 0;
 }
