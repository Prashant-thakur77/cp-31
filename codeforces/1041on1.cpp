#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
      mp[v[i]]++;
    }
    //cout<<mp.size()<<endl;
    int flag=0;
    
      if (mp.find(0) != mp.end()){
        //cout<<"hello0"<<endl;
        flag=1;
        
      }
      else if(mp.find(-1) != mp.end()){
       // cout<<"hello1"<<endl;
        //cout<<"flag  "<<flag<<endl;
        //cout<<mp.size()<<endl;
        if(mp.size()>2){
           //cout<<"hello1"<<endl;
          
          flag=1;
         
        }


      }
      else if(mp.size()>1){
        //cout<<"hello2"<<endl;
        flag=1;
        
      }
      if(flag==1){
        cout<<"no"<<endl;
      }
      else cout<<"yes"<<endl;
    
    
    

  }
  return 0;

}