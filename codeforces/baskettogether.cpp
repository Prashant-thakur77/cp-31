#include<bits/stdc++.h>
using namespace std;
int main(){
  
    int n;
    cin>>n;
    long long power;
    cin>>power;
    vector<long long> players(n);
    for(int i=0;i<n;i++){
      cin>>players[i];
    }
    sort(players.begin(),players.end());
    int c=n;
    int cnt=0;
    for(int i=n-1;i>=0;i--){
      //cout<<power<<"   "<<players[i]<<endl;
      long long t=ceil(power/(double)players[i]);
      //cout<<"t   "<<t<<endl;
      
      if(power%players[i]==0){
        t++;
 
      }
      //cout<<"c-t  "<<c-t<<endl;
      
      if((c-t)<0){
        break;
      }
      c=c-t;
      cnt++;
 
    }
    cout<<cnt<<endl;
  
  return 0;
 
}