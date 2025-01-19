#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      int a,b,c,d;
      cin>>a>>b>>c>>d;
      vector<int> v(3);
      v[0]=a+b;
      v[1]=c-b;
      v[2]=d-c;
      int cnt=0;
      unordered_map<int,int> mp;
      for(int i=0;i<3;i++){
        mp[v[i]]++;
        
      }
      for(int i=0;i<3;i++){
       if(mp[v[i]]>cnt){
        cnt=mp[v[i]];
       }
        
      }
      cout<<cnt<<endl;

     
        


      }
      
      


      
    


 }
