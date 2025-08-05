#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    vector<int> b(n);
     int sum=0;
    for(auto &it:v){
      cin>>it;
      //sum+=it;
    }
    for(auto &it:b){
      cin>>it;
    }
    int maxi=INT_MIN;
     vector<int> ans;
    for(int i=0;i<n;i++){
      sum+=v[i];
      
      
      maxi=max(maxi,b[i]);
      k--;
      if(k<0)break;
      int subsum=sum+k*maxi;
      ans.push_back(subsum);
      

    }
    sort(ans.begin(),ans.end());
    
    int m=ans.size();
    /**for(int i=0;i<m;i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;**/
    cout<<ans[m-1]<<endl;
   
    
  }
  return 0;
}