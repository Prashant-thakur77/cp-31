#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];


        }
        int k=v[0];
        for(int i=0;i<n-2;i=i+2){
            if(k<v[i+2]) {
                k=v[i+2];
            }
        }
        cout<<k<<endl;
    }
    return 0;
}



            


        
        