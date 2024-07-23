#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        cin>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];

        }
        bool yes=false;
        for(int i=0;i<n;i++){
            if(v[i]==k) {
                yes=true;
                break;
            }
        }    
        if(yes) cout<<"YES"<<endl;
        else cout<<"NO"<<endl ;   
        

    }
}