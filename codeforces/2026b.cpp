#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      long long x;
      cin>>x;
      vector<long long> v(x);
      for(int i=0;i<x;i++){
        cin>>v[i];
      }
      vector<long long> b;
      long long max=0;
      for(int i=0;i<x-1;i++){
        long long t=v[i+1]-v[i];
        b.push_back(t);
        if(b[i]>max){
          max=b[i];
        }


      }
      int flag=1;
      if(max==b[x-2] || max==b[0]){
        flag=0;

      }
      sort(b.begin(),b.end());
      if(x==1){
        cout<<1<<endl;
      }
      else if(x==2){
        cout<<b[0]<<endl;
      }
      else{
        if(flag==0){
          cout<<b[x-3]<<endl;

        }
        

      }
      

    }
    
    return 0;
 }
