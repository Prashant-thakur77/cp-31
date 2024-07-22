#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,y,p;
        cin>>n;
        y = 0;
        p = 0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];

        }
        set<int> s;
        s.insert(v.begin(),v.end());
        bool yes=true;
        
        if(s.size()>2) {
            yes = false;
        }
        else if(s.size()==2){
            for(int i=0;i<n;i++){
                if(v[i]== v[0]) {
                    y++;
                    
                }    
                
            }
            
            if(y!=n/2 && y!=(n+1)/2) {
                yes = false;
            }    
        }
        if(yes) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        

    } 
    return 0;
}