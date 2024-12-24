#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int long long n;
    cin>>n;
    vector<long long> min_;
    long long min_elem=INT_MAX;
    
    for(int i=0;i<n;i++){
      
      int ind=0;
      long long m;
      
      cin>>m;
      vector<long long> minm(m);
      
      
      for(int i=0;i<m;i++) cin>>minm[i];
      long long minnn=INT_MAX;
      for(int i=0;i<m;i++ ){
        if(minm[i]<minnn){
          minnn=minm[i];
          ind=i;
        }
      }
      min_elem=min(min_elem,minnn);
      minm.erase(minm.begin()+ind);
      long long mini=INT_MAX;
      for(int i=0;i<m-1;i++){
        if(minm[i]<mini){
          mini=minm[i];
        }
      }
      min_.push_back(mini);

    }
    long long the_min=INT_MAX;
    long long sum=0;
     for(int i=0;i<n;i++){
   
      sum+=min_[i];
      if(min_[i]<the_min){
        the_min=min_[i];
      }

        
      }
  
      cout<<min_elem<<endl;
      cout<<sum<<endl;
      cout<<the_min<<endl;
     
    long long ans=min_elem+sum-the_min;
    cout<<ans<<endl;

  }

}
