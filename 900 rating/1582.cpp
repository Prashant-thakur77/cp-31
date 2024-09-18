#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<long long> v(n);
      int flag=0;
      long long cnt=0;
      long long cnt0=0;
      for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==1) {
          flag=1;
          cnt++;
        }
        else if(v[i]==0){
          cnt0++;
        }
      }
      if(cnt==0){
        cout<<0<<endl;
      }
      else{
        cout<<cnt*(1LL<<cnt0)<<endl;
      }
      
    }
    return 0;
 }
