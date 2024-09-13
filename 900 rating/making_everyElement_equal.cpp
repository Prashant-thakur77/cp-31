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
      int max_no=1;
      int moves=0;
      sort(v.begin(),v.end());
     
      int cnt=1;
      for(int i=1;i<n;i++){
        if(v[i]==v[i-1]){
          cnt++;
          
        }
        else{
          cnt=1;
        }
        if(cnt>max_no){
          max_no=cnt;
        }
      }
      while(max_no<=n/2){
        max_no=max_no*2;
        moves+=1+(max_no-max_no/2);
      }
      if(max_no<n){
        moves+=1+(n-max_no);
      }
      cout<<moves<<endl;
    }
    return 0;
 }