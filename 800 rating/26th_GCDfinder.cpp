#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            
        }
        int h;
        
        bool yes=false;
        for(int i=0;i<n;i++){
            if(yes) break;
            for(int j=i;j<n;j++){
                h=__gcd(v[i],v[j]);
                if(h<3) {
                    yes=true;
                    break;
                }

                
            }
            
            


        }

       
        if(yes) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}