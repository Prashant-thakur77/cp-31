#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int k=0;
    for(int i=0;i<n;i++){
      if((pow(2,i))<n){
        k=i;
      }
      if((pow(2,k))>=n){
        k--;
        break;

      }
    }
    vector<int> ans;
    int end=pow(2,k);
    int j=0;
    for(int i=n-1;i>=0;i--){
      if(i>=end){
        ans.push_back(i);
        j++;
      }
      else break;
    }
    int remain=n-j;
    //cout<<remain<<endl;
    for(int i=0;i<remain;i++){
        
      
        ans.push_back(i);
        
       
      
      
    }
    for(int i=0;i<n;i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;
 

    


    
  }
  return 0;
}