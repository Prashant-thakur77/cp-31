#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  
  cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;
    
    int Xor=0;
    if((a-1)%4==0)Xor=a-1;
    else if((a-1)%4==1)Xor=1;
    else if((a-1)%4==2)Xor=a;
    else Xor=0;
    int j=Xor^b;
    if(j==a) cout<<a+2<<endl;
    else if(Xor==b) cout<<a<<endl;
    else cout<<a+1<<endl;
   
  }
  return 0;
}