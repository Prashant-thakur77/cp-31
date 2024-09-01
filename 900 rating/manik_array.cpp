#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int> v(n+1);
      for(int i=1;i<=n;i++){
        cin>>v[i];
      }
      
      int maxi=v[n]-v[1];
      for(int i=1;i<n;i++){
        maxi=max(maxi,v[n]-v[i]);
      }
      for(int i=2;i<=n;i++){
        maxi=max(maxi,v[i]-v[1]);
      }
      for(int i=1;i<n;i++){
        maxi=max(maxi,v[i]-v[i+1]);
      }
      cout<<maxi<<endl;
        

    }

    
    return 0;
 }
 

 
 