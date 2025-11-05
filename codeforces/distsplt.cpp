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
    map<char,int> mp1;
    map<char,int> mp2;
    mp1[s[0]]=1;
    for(int i=1;i<n;i++){
      
      mp2[s[i]]++;
      
    }
    int maxi=mp1.size()+mp2.size();
     //cout<<maxi<<endl;
    for(int i=1;i<n;i++){
      mp2[s[i]]--;
      if(mp2[s[i]]==0){
        mp2.erase(s[i]);
      }
      //cout<<"mp2    "<<mp2.size()<<endl;
      mp1[s[i]]++;
      //cout<<"mp1    "<<mp1.size()<<endl;
      int sum=mp1.size()+mp2.size();
      maxi=max(maxi,sum);
       //cout<<maxi<<endl;


    }
    cout<<maxi<<endl;
    
    
    
   
  }
  return 0;
}
