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
        if(!is_sorted(v.begin(),v.end())){
            cout<<0<<endl;
        }
        
        
        
        else{
            int j=INT_MAX;
            for(int i=1;i<n;i++){
                j=min(j,v[i]-v[i-1]);
            }
            int p=(j/2)+1;
            cout<<p<<endl;
            
        }
            
            
         
    }
    return 0;
}
   

        

