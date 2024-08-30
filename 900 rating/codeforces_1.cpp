#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      int l,b;
      cin>>l>>b;
      if(b-l+1<4) cout<<1<<endl;
      else cout<<(b-l+1)/4<<endl;
    }
    return 0;
 }