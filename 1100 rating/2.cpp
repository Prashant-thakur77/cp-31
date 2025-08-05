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
    int maxi2=INT_MIN;

    for(int i=0;i<n;i++){
      sum+=v[i];
      
      
      maxi=max(maxi,b[i]);
      k--;
      if(k<0)break;
      maxi2=max(maxi2,sum+k*maxi);
      
      

    }
    cout<<maxi2<<endl;
   
    
  }
  return 0;
}