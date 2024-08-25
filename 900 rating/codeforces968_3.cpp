#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      string s;
      cin>>s;
      map<char,int> mpp;
      for(int i=0;i<n;i++){
        mpp[s[i]]++;
      }
      int cnt=0;
      for(auto& it:mpp){
        
        if(it.second>=1){
          cout<<it.first;
          it.second--;
          cnt++;
        }
        if(cnt%2==0){
          
        }

       
      }
      
      
      
      cout<<endl;
    }
    return 0;
 }


      