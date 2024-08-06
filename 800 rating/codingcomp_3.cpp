#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
      bool yes=false;
      long long n,s,m;
      cin>>n>>s>>m;
      
      vector<long long> v;
      int i;
      int f=0;
      while(cin>>i){
        
        v.push_back(i);
        f++;
        if(f==2*n)break;

      }
      v.insert(v.begin(),0);
      v.insert(v.end(),m);
      

      
      


        
        

        
      
      
        
        
      
     
      
      for(int i=0;i<2*n+1;i+=2){
        if(v[i+1]-v[i]>=s) {
          yes=true;
          break;
        }

      }
    if(yes) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    }
    return 0;
}


      
      