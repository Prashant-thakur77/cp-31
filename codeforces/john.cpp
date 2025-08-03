#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  
  cin>>t;
  while(t--){
    long long a,b;
    cin>>a>>b;
    long long remaina=-1;
    long long remainb=-1;
    long long otherparta=1;
    long long otherpartb=1;
    while(a%8==0){
      a=a/8;
      otherparta*=8;

    }
    while(a%4==0){
      a=a/4;
      otherparta*=4;

    }
    while(a%2==0){
      a=a/2;
      otherparta*=2;

    }
    while(b%8==0){
      b=b/8;
      otherpartb*=8;

    }
    while(b%4==0){
      b=b/4;
      otherpartb*=4;

    }
    while(b%2==0){
      b=b/2;
      otherpartb*=2;

    }
    remaina=a;
    remainb=b;
    if(remaina!=remainb){
      cout<<-1<<endl;
    }
    else{
      if(otherparta==otherpartb)cout<<0<<endl;
      else if(otherparta<otherpartb){
        int total=0;
        while(otherparta*8<=otherpartb){
          otherparta*=8;
          total++;

        }
        while(otherparta*4<=otherpartb){
          otherparta*=4;
          total++;

        }
        while(otherparta*2<=otherpartb){
          otherparta*=2;
          total++;

        }
        cout<<total<<endl;

      }
      else{
        int total=0;
        while(otherparta%8==0 && otherparta/8>=otherpartb){
          otherparta/=8;
          total++;

        }
        while(otherparta%4==0 && otherparta/4>=otherpartb){
          otherparta/=4;
          total++;

        }
        while(otherparta%2==0 && otherparta/2>=otherpartb){
          otherparta/=2;
          total++;

        }
        cout<<total<<endl;

      }
    }
      
      
    
    
  }
  return 0;
}