#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      long long n,a,b;
      cin>>n;
      cin>>a>>b;
      if(a>=b){
         if(n%b==0){
        cout<<n/b<<endl;
      }
      else{
        cout<<n/b +1<<endl;

      }

      }
      else{
        if(n%a==0){
        cout<<n/a<<endl;
      }
      else{
        cout<<n/a +1<<endl;

      }

      }
     
    }
    return 0;
 }