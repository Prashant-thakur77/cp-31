#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
      int flag=0;
      long long a,b,c;
      cin>>a>>b>>c;
     
     
      if(a==2*b-c){
        flag=1;

      }
      else{
        long long a1,c1;
        long long b1;
        
        
        a1=2*b-c;
        b1=(a+c)/(float)2;
        c1=2*b-a;
        double b2=(a+c)/(float)2;
        cout<<"hello"<<endl;
        cout<<a1<<"  "<<b1<<"   "<<c1<<endl;
        if(a1>0 && a1%a==0){
          flag=1;
          cout<<"helloa"<<endl;
        }
        if(b2==b1){
           if(b1>0 && b1%b==0 ){
          flag=1;
          cout<<"hellob"<<endl;
        }

        }
       
        if(c1>0 && c1%c==0){
          flag=1;
          cout<<"helloc"<<endl;
        }
      }
      if(flag==0){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
    }
    return 0;
}