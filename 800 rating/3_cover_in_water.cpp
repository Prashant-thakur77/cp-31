#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        string s;
        cin>>n;
        cin>>s;
        
        k=0;
        bool p=true;
        for(int i=0;i<n;i++){
            
            
            if(i>0 && i<n-1){
                 if(s[i]== '.' && s[i+1]=='.' && s[i-1]=='.'){
                    cout<<"2"<<endl;
                    p=false;
                    break;
                }
            }
            if(s[i]== '.') k++;
           
        }
        if(p) cout<<k<<endl;
    }
    return 0;
 }
 