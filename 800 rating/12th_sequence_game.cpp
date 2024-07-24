#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n;
     
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
        k=0;
        vector<int> u(1);
        u[0]=v[0];
        
        if(n==1){
            cout<<n<<endl;
            cout<<u[0]<<endl;

        }
        else{
            for(int i=1;i<n;i++){
                if(u[k]>v[i]){
                    

                    u.insert(u.begin()+(k+1),2,v[i]);
                    k=k+2;
                }
                
                else {
                    u.insert(u.begin()+(k+1),v[i]);
                    k=k+1;
                }

            }
            

            int p=u.size();
            cout<<p<<endl;
            for(int i=0;i<p;i++){
                
                cout<<u[i]<<" ";
            }
            cout<<endl;
        }
        
        
    }
    return 0;
}
