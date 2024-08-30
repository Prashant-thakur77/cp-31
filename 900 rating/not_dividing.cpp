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
      if(v[0]%2==0){
        for(int i=1;i<n;i++){

          if((i%2!=0 && v[i]%2==0) ||i%2!=0 &&  v[i]==1){
            if(v[i]==1) v[i]++;

            v[i]++;

          }
          else if(i%2==0 && v[i]%2!=0){
            
            v[i]++;
          }
        }
      }
     else{
       if(v[0]==1) v[0]+=2;
        
        for(int i=1;i<n;i++){
          if((i%2==0 && v[i]%2==0) || i%2!=0 &&  v[i]==1){
            if(v[i]==1) v[i]++;
            v[i]++;

          }
          else if(i%2!=0 && v[i]%2!=0){
            v[i]++;
          }
        }
      }
      for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
      }
      cout<<endl;
    }
    return 0;
}

