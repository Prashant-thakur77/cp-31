#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
        int n;
        cin>>n;
        int yes=0;
        vector<int> v(n);
        
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]!=v[0]) yes =1;


        }
        int sum=0;
        if(yes==0) cout<<"NO"<<endl;
        
        else{
            for(int i=n-1;i>=1;i--){
                int didswap=0;
                for(int j=0;j<=i-1;j++){
                    if(v[j]<v[j+1]){
                         int temp=v[j+1];
                        v[j+1]=v[j];
                        v[j]= temp;
                        didswap=1;

                    }
                   
                }
                if(didswap==0) break;
            }
            
            if(v[0]==v[1]){
                
                int temp=v[n-1];
                v[n-1]=v[1];
                v[1]= temp;

            }
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        
            


    }
    return 0;
}
