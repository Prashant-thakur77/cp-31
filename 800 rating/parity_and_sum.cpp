#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
        int n;
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
            }
        }
        sort(u.begin(),u.end());
        bool yes=true;
        
        if(p==0 || p==n) cout<<"0"<<endl;
        else {
            for(int i=0;i<p;i++){
                
                if(largest>u[i]){
                    largest+=u[i];
                }
                else {
                    yes=false;
                    break;
                }
            }
            if(yes) cout<<p<<endl;
            else cout<<p+1<<endl;

        }
        
        
    }
    return 0;
}
