#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt,yes;
        cin>>n;
        vector<int> v(n);
        yes=1;
        int k=0;
        cnt=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==2){
                yes=0;
                cnt++;
            }
            
        }
        
        
        if(yes==1) cout<<1<<endl;
        else if(cnt%2!=0) cout<<-1<<endl;
        
        
        else{

        
            for(int i=0;i<n;i++){
                if(v[i]==2){
                    k++;
                    if(k==cnt/2) {
                        cout<<i+1<<endl;
                        break;
                    }
                }
            }
                

        }
    }
    return 0;
}