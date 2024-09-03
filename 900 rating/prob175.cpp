#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<long long> v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      long long cnt=0;
      int yes=0;
      for(int i=n-1;i>0;i--){
        if(v[i]==0){
          yes=1;
        }
        while( v[i-1]>0 && v[i]<=v[i-1]){
          v[i-1]/=2;
          cnt++;
        }
        
      }
      if(yes==0){
        cout<<cnt<<endl;

      }
      else cout<<-1<<endl;
    }
    return 0;
 }