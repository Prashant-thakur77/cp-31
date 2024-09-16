#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      long long i,n;
      cin>>i>>n;
      if(i%2==0){
        if(n%4==1){
          cout<<i-n<<endl;

        }
        else if(n%4==2){
          cout<<i+1<<endl;
        }
        else if(n%4==3){
          cout<<i+1+n<<endl;
        }
        else if(n%4==0){
          cout<<i<<endl;
        }
      }
      else{
        if(n%4==1){
          cout<<i+n<<endl;

        }
        else if(n%4==2){
          cout<<i-1<<endl;
        }
        else if(n%4==3){
          cout<<i-1-n<<endl;
        }
        else if(n%4==0){
          cout<<i<<endl;
        }
      }
    }
    return 0;
 }