#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
        int l,r;
        cin>>l>>r;
        int L,R;
        cin>>L>>R;
        vector<int> v(101);
        for(int i=l;i<=r;i++){
          v[i]++;
        }
        for(int i=L;i<=R;i++){
          v[i]++;
        }
        int y=min(r-l+1,R-L+1);
        int k=max(r-l+1,R-L+1);
        
        int yes;
        int u;
        int h;
        for(int i=1;i<101;i++){
          if(v[i]==2 && (i==l || i==r ||i==L ||i==R)){
             yes=1;
             break;

          }
          else if(v[i]==2 ) {
            u=2;
            
          }
          

        }
        if(u!=3) cout<<"1"<<endl;
        if(u==2) cout<<y+1<<endl;
        if(yes==1) cout<<3<<endl;
    }
    return 0;
}
