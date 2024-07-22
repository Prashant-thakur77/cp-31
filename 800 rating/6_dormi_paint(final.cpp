#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,y,p,m,l;
        cin>>n;
        y = 0;
        p = 0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];

        }
        set<int> s;
        s.insert(v.begin(),v.end());
        if(s.size()==1) cout<<"YES"<<endl;
        else if(s.size()>2) cout<<"NO"<<endl;
        
        else if(s.size()==2){
            for(int i=0;i<n;i++){
                if(v[i]== v[0]) {
                    y++;
                    
                }    
                else {
                    p++;
                       
                }
            m= max(y,p) ;
            l=min(y,p);   
            }
            if(n%2==0){
                if(m==l)   cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                

            }
            
            else if(n%2!=0){
                   if(m==l+1) cout<<"YES"<<endl;
                   else cout<<"NO"<<endl;
            } 
            
            

        }
        

    } 
    return 0;
}