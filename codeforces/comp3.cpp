#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      string v;
      cin>>v;
     
      if(v[0]== '1' || (v[1]=='1' && v[2]=='1')){
        cout<<"yes"<<endl;
      }
      else{
        cout<<"no"<<endl;
      }
    }
    return 0;
 }
