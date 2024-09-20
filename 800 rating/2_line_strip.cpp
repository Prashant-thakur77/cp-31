#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    
    cin>>t;
    while(t--){
        int n,x
        ;
        int m,c,u,o;
        cin>>n;
        cin>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            
        }    
        c=v[0];
        for(int i=0;i<n-1;i++){
            m=v[i+1]-v[i];
            c=max(c,m);
        }    
        o=2*(x-(v[n-1])); 
        
        cout<<max(c,o)<<endl; 

    }
    return 0;
}