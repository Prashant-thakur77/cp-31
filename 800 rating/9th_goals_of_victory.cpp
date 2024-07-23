#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    

    while (t--){
        int u,k;
        cin>>u;
        k=0;
        
        vector<int> v(u-1);
        for (int i=0;i<u-1;i++){
            cin>>v[i];
            k=k+ v[i];


        }
        cout<<-k<<endl;
        
    }
    return 0;
}