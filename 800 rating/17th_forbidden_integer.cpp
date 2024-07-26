#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
    cin>>t;
    while(t--){
        int sum,k,x;
        cin>>sum;
        cin>>k;
        cin>>x;
        vector<int> v;
        if(x!=1){
            cout<<"YES"<<endl;
            cout<<sum<<endl;
            while(sum--){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else if((sum%2!=0 && k==2) ||(k==1 )){
            cout<<"NO"<<endl;

        } 

        
        else {
                
                int s=0;
                
                if(sum%2!=0){
                    s=s+3;
                    v.push_back(3);

                    
                    
                }
                while(s!=sum){
                    s=s+2;
                    v.push_back(2);
                }
                cout<<"YES"<<endl;
                cout<<v.size()<<endl;
                for(int i=0;i<v.size();i++){
                    cout<<v[i]<<" ";
                }
                cout<<endl;



                
            
        }
    }
    return 0;
}