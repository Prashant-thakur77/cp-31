#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      long long n,m,o,x,y,pos;
      cin>>n>>m>>o;
      cin>>x>>y;
      cin>>pos;
      if(x>y){
        int temp=x;
        x=y;
        y=temp;

      }
      if(pos>x && pos<y){
        cout<<(y-x)/2<<endl;
      }
      else if(pos<x){
        cout<<x-1<<endl;
      }
      else if(pos>y){
        cout<<n-y<<endl;

      }
    }
    return 0;
 }