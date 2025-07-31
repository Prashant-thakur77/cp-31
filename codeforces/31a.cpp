#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    sort(v.begin(),v.end());
    int conti=0;
   
    for(int i=0;i<n;i++){
      if(v[i]==0){
        conti++;

      }
     
      if(v[i]>=1)break;
      
      

    }
    int mex=conti;
   
    int sum=0;
     for(int i=0;i<n;i++){
      sum+=v[i];

    }
    cout<<sum+mex<<endl;

    


  }
  return 0;

}