#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  
  cin>>t;
  while(t--){
    long long x,y,k;
    cin>>x>>y>>k;
    long long total_trades=k;
    long long coalstrade=ceil(((double)k*y-1)/(x-1));
    total_trades+=coalstrade;
    long long leftsticks=(x-1)*coalstrade+1-k*y;
    if(leftsticks>=k){
      total_trades+=0;

    }
    else{
       long long stickstrade=ceil((double)(k-leftsticks)/(x-1));
       total_trades+=stickstrade;

    }
    cout<<total_trades<<endl;

    
      
    
    
  }
  return 0;
}