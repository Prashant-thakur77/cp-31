#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,i;
        cin>>n;
        
        cin>>m;
        
        string x,s;
        cin>>x;
        cin>>s;
        
        
        for( i=0;i>=0;i++){
            if(x.find(s)!=std::string::npos) {
                cout<<i<<endl;
                break;
            }
            else if(i>5) {
                cout<<"-1"<<endl;
                break;    
            }
            x=x.append(x);
            
            
           
        }    

       
    }
    return 0;
}
