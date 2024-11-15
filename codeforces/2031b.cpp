#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      long long n;
      cin>>n;
      vector<long long> v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      int flag=0;
      for(int i=0;i<n;i++){
        int l=i+1;
        if(i==0){
          if(l!=v[i] && l!=v[i+1]){
            flag=1;
          }

        }
        else if(i==n-1){
          if(l!=v[i] && l!=v[i-1]){
            flag=1;
          }

        }
        else if(l!=v[i-1] && l!=v[i] && l!=v[i+1]){
          flag=1;
        }
      }
      if(flag==0){
        cout<<"yes"<<endl;
      }
      else if (flag==1){
        cout<<"no"<<endl;
      }

      
      
    }
    
    return 0;
 }
