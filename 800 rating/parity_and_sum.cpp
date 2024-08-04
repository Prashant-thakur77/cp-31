#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
        int n;
        int k;
        cin>>n;
        int p=0;
        vector<long long> v(n);
        vector<long long> u;
        long long largest;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2!=0) {
                largest=v[i];
                
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]%2==0) {
                u.push_back(v[i]);
                p++;
                
            }
            else if(v[i]>largest){
                largest=v[i];
                k=i;
            }
        }
        int cnt=0;
        
        
       
        
      
        
        
        if(p==0 || p==n) cout<<"0"<<endl;
        else {
            for(int i=0;i<n;i++){
            
                if(( v[i]%2==0)){
                    if(v[k]>v[i]) {
                            v[i]=v[k]+v[i];
                        v[k]=v[i];

                        cnt++;
                    }
                    else {
                        v[k]=v[i]+v[k];
                        cnt++;
                    }
                }

           
            }

            cout<<cnt<<endl;
        }
       
        
        
    }
    return 0;
}
