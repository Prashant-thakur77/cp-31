#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
      long long n;
      cin>>n;
     
      
     
      string g=to_string(n);
      int y=g.length();
      map<int,int> mpp;
      
      for(int i=y;i>0;i--){
        if(g[i-1]=='5'){
          mpp[5]=i;

         
        }
        else if(g[i-1]=='2'){
          mpp[2]=i;
        }
         else if(g[i-1]=='7'){
          mpp[7]=i;
        }
         else if(g[i-1]=='0'){
          mpp[0]=i;
        }

      }
      int j=-1;
      int m=mpp[0];
      int copy_m=m;

      //cout<<m<<endl;
      for(int i=y;i>0;i++){
        
        
           
        if(g[i-1]=='0' && (i-1)!=copy_m){
          
          //cout<<"i"<<"=  "<<i<<endl;
          m=i-1;
          //cout<<"m"<<"=  "<<m<<endl;
          }
        }

      
      //cout<<mpp[5]<<endl;
      int b=0;
     int c=0;
      int v=0;
      int f=0;
      //cout<<mpp[5]<<" "<<mpp[2]<<endl;
      if(mpp[5]>0 && mpp[2]>0){
         b=mpp[5]-mpp[2];
         if(b>0){
          b+=y-mpp[5];
         }
         else if(b<0){
          b=0;
         }
      }
       if(mpp[0]>0 && mpp[5]>0){
         c=mpp[0]-mpp[5];
         if(c>0){
          c+=y-mpp[0];
         }
         else if(c<0){
          c=0;
         }
      }
       if(mpp[5]>0 && mpp[7]>0){
         v=mpp[5]-mpp[7];
         if(v>0){
          v+=y-mpp[5];
         }
         else if(v<0){
          v=0;
         }
      }
       if(mpp[0]>0 && m>0){
         f=mpp[0]-m;
         if(f>0){
          f+=y-mpp[0];
         }
         else if(f<0){
          f=0;
         }
      }
  
      
     
      
      //cout<<b<<"  "<<c<<"  "<<v<<"  " <<f<<endl;
      vector<int> l;
      
        l.push_back(b);
      
        l.push_back(c);
     
        l.push_back(v);
      
        l.push_back(f);
        int mini=INT_MAX;
   
      for(int i=0;i<4;i++){
        if(mini>l[i] && l[i]>0){
          mini=l[i];
        }
      }
      cout<<mini-1<<endl;
     
   
     
    
      

      
       
    }
    return 0;
}