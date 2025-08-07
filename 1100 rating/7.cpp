#include<bits/stdc++.h>
using namespace std;
long long noofcolums(long long height,vector<long long> &v ){
  long long noofcol=0;
  for(int i=0;i<v.size();i++){
    if(height-v[i]>0){
      noofcol+=height-v[i];
    }
  }
  return noofcol;

}
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,x;
    cin>>n>>x;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];


    }
    long long low=1;
    long long high=10000000000;
    while(low<=high){
      long long mid=(low+high)/2;
      long long ans=noofcolums(mid,v);
      if(ans>x){
        high=mid-1;
      }
      else{
        low=mid+1;
      }
    }
    cout<<high<<endl;
    
   
   
  }
  return 0;
}