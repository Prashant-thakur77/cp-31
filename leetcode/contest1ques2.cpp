#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    
    cin>>t;
    while(t--){
      int num1,num2,num3;
      cin>>num1>>num2>>num3;
       string a=to_string(num1);
        string b=to_string(num2);
        string c=to_string(num3);
        while(a.length()<4){
            a="0"+a;
            
        }
            
         while(b.length()<4){
              b="0"+b;
             
         }
         
           
         while(c.length()<4){
              c="0"+c;
         }
        
        vector<int> v;
        vector<int> h;
        vector<int> n;
        
            
         for(int i=0;i<4;i++){
             v.push_back(a[i]-48);
             h.push_back(b[i]-48);
             n.push_back(c[i]-48);
             
             
         }
        int ans=0;
        vector<int> t;
        int test=1;
        for(int i=0;i<4;i++){
            int o,l;
            o=min(v[i],h[i]);
            l=min(o,n[i]);
            t.push_back(l);
            if(t[i]!=0 || test==0){
                if(i==0){
                    ans+=t[i]*1000;
                    
                }
                if(i==1){
                    ans+=t[i]*100;
                    
                }
                if(i==2){
                    ans+=t[i]*10;
                    
                }
                if(i==3){
                    ans+=t[i];
                    
                }
                
            }
        }
             
             
   
            
     cout<<ans<<endl;
            
            
                  
                 
            
            

        
        
        
        
    }
    return 0;
}
