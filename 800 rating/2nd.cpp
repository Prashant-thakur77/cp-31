#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,u;
        cin>>s;
        cin>>u;
        int g;
        g=0;

        
        
        for(int i=1;i<n;i++){
            if(s[i]== '.' && s[i-1] == 'x' && s[i+1] == 'x' ){
                if(u[i]== '.'&& u[i-1] == '.' && u[i+1] == '.' ) {
                    g++;
                }


            }

        }
        for(int i=1;i<n;i++){
            if(u[i]== '.' && u[i-1] == 'x' && u[i+1] == 'x' ){
                if(s[i]== '.' && s[i-1] == '.' && s[i+1] == '.' ) {
                    g++;
                }


            }

        }
        cout<<g<<endl;
    }
    return 0;
}
