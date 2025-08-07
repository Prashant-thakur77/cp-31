#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,q;
    cin>>n>>q;
    vector<long long> v(n);
    vector<long long> a(q);
     long long maxi=0;
    for(int i=0;i<n;i++){
      cin>>v[i];
      maxi=max(maxi,v[i]);
    }
    for(int i=0;i<q;i++){
      cin>>a[i];
    }
    long long prev=31;
    for(int i=0;i<q;i++){
      if(a[i]>=prev)continue;
      long long val=pow(2,a[i]);
      
     
      for(int j=0;j<n;j++ ){
        if(v[j]%val==0){
          v[j]+=val/2;
         
        }
      }
      prev=a[i];
    }
    for(int i=0;i<n;i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;
    
   
  }
  return 0;
}