#include<bits/stdc++.h>
using namespace std;


 int main(){
    int t;
    cin>>t;
    while(t--){
      long long n;
      cin>>n;
      long long k=n;
      long long cnt2=0;
      long long cnt3=0;

      while(k%3==0){
        k=k/3;
        cnt3++;
      }
      while(k%2==0){
        k=k/2;
        cnt2++;
      }
      if(k!=1){
        cout<<-1<<endl;
      }
      else if(cnt3<cnt2){
        cout<<-1<<endl;
      }
      else cout<<2*cnt3-cnt2<<endl;


      
        
    }
    return 0;
 }
       