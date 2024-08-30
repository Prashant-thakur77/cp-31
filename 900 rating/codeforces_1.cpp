#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      int l,b;
      cin>>l>>b;
      if(l%2==0 ) cout<<(b-l+1)/4<<endl;
      if(l%2!=0 ) cout<<(b-l+2)/4<<endl;
      

    }
    return 0;
 }