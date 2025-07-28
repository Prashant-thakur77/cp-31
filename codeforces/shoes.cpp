#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<long long > shoesize(n);
    for(auto &it:shoesize){
      cin>>it;
    }
    map<long long,int> mp;
    long long last=shoesize[0];
    for(int i=0;i<n;i++){
      if(shoesize[i]!=last){
        last=shoesize[i];
      }
      mp[shoesize[i]]++;
      

    }
    int flag=0;
    for(auto& it :mp){
      //cout<<"mp.scond  "<<it.first<<endl;
      if(it.second==1){
        flag=1;
        break;
      }
      



    }
    if(flag==1)cout<<-1<<endl;
    else{
      int cnt=mp[shoesize[0]];
      int last=shoesize[0];
      int curr=cnt;
      for(int i=0;i<n;i++){
        if(shoesize[i]!=last){
          cnt=mp[shoesize[i]];
          curr=cnt;
          last=shoesize[i];
        }
        if(cnt==curr){
          cout<<i+cnt<<" ";
          cnt--;
          continue;
        }
        
        cout<<i<<" ";


      

    }
    cout<<endl;

    }
   





  }
  return 0;
}