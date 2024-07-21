#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
        int x,y;
        cin>>x;
        cin>>y;
        vector<int>v(x);
        
        for(int i=0;i<x;i++){
            cin>>v[i];
        }


        if (y==1) {
            bool possible=true;
           for(int i=0;i<x-1;++i){
            if(v[i]>v[i+1]){
                possible=false;
                break;
            }
           }

            if(possible) cout<<"YES"<<endl;
            else cout<< "NO"<<endl;
        }    
        else cout<< "YES"<<endl;
    }
    return 0;
   
}